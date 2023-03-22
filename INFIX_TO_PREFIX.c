//infix to prefix
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
char stack[MAX];
char infix[MAX];
char r_infix[MAX];
char postfix[MAX];
char prefix[MAX];
int top = -1;
void push(char);
char pop(void);
int isOperator(char);
int precedence(char);
int main()
{
	int i = 0, j = 0,temp;
	printf("\nEnter the expression without spaces :");
	gets(infix);
	while(infix[i] != '\0')
	{
		if(infix[i] == '(')
		{
			infix[i] = ')';
		}
		else if(infix[i] == ')')
		{
			infix[i] = '(';
		}
		push(infix[i]);
		i++;
	}
	while(top != -1)
	{
		r_infix[j] = pop();
		j++;
	}
	i = 0,j = 0;
	char c = r_infix[i];
	while(i < strlen(infix))
	{
		c = r_infix[i];
		if(c == '(')
		{
			push(c);
		}
		else if(c == ')')
		{
			while(stack[top] != '(')
			{
				postfix[j] = pop();
				j++;
			}
			temp = pop();
		}
		else if(isOperator(c))
		{
			while((top != -1) && (precedence(stack[top]) > precedence(c)))
			{
				postfix[j] = pop();
				j++;
			}
			push(c);
			
		}
		else
		{
			postfix[j] = c;
			j++;
		}
		i++;
	}
	while(top != -1)
	{
		postfix[j] = pop();
		j++;
	}
	postfix[j] = '\0';
	printf("\nThe prefix expression is :");
	i = 0, j = 0;
	while(postfix[i] != '\0')
	{
		if(infix[i] == '(')
		{
			infix[i] = ')';
		}
		else if(infix[i] == ')')
		{
			infix[i] = '(';
		}
		push(postfix[i]);
		i++;
	}
	while(top != -1)
	{
		prefix[j] = pop();
		j++;
	}
	printf("%s",prefix);
	return 0;
}

void push(char c)
{
	top = top + 1;
	stack[top] = c;
}

char pop()
{
	char data = stack[top];
	top = top -1;
	return data;
}

int isOperator(char c)
{
	switch(c)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
		case '^':
			return 1;
		default:
			return 0;	
	}
}

int precedence(char c)
{
	switch(c)
	{
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
		case '%':
			return 2;
		case '^':
			return 3;
		default:
			return 0;
	}
}
