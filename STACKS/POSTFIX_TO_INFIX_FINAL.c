//A C program to convert a postfix expression into a infix expression
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int top = -1;
char postfix[MAX], stack[MAX], infix[MAX];
void push(char c);
char pop();
void postfix_to_infix();
int isOperator(char);
void main()
{
	printf("\nEnter the postfix expression :");
	gets(postfix);
	postfix_to_infix();
	puts(infix);
}

void postfix_to_infix()
{
	int i = 0, j = 0;
	strrev(postfix);
	char c = postfix[i];
	while(i < strlen(postfix))
	{
		c = postfix[i];
		if(isOperator(c))
		{
			push(c);
		}
		else
		{
			infix[j] = c;
			j++;
			infix[j] = pop();
			j++;
		}
		i++;	
	}
	infix[j] = postfix[top];
	top--;
	strrev(infix);
}

void push(char c)
{
	top = top + 1;
	stack[top] = c;
}

char pop()
{
	return stack[top--];
}

int isOperator(char c)
{
	switch(c)	
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
		case '%':
			return 1;
		default:
			return 0;
	}
}

