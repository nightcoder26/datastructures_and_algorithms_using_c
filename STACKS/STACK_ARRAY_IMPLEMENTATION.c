#include<stdio.h>
int arr[100];
int max;
int top = -1;
void push();
void pop();
int isEmpty();
int isFull();
void peek();
void display();
int main()
{
	int value, choice;
	printf("\nEnter the size of the stack : ");
	scanf("%d",&max);
	do
	{
		printf("\nSelect an operation to perform on your stack : ");
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Check if empty ");
		printf("\n4.Check if full");
		printf("\n5.Display");
		printf("\n6.Peek");
		printf("\nIf you want to exit the program please type 0\n");
		printf("\nEnter a choice :");
		scanf("%d",&choice);
		switch(choice)
	      {
			case 0: printf("\nThank you!");
				    break;
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: if(isEmpty() == 1)
					printf("\nThe stack is empty");
				    else
					printf("\nThe stack is not empty");
				    break;
			case 4: if(isFull() == 1)
					printf("\nThe stack is full");
				    else
					printf("\nThe stack is not full");
					break;
			case 5: display();
					break;
			case 6: peek();
					break;
			default:printf("\nEnter a valid choice");
					break;
		}
	      }while(choice != 0);
	
}
void push()
{
	int value;
	if(isFull() == 1)
		printf("\nThe stack is full\n");
	else
	{
		printf("\nEnter the value you want to push into the stack :");
		scanf("%d",&value);
		top = top + 1;
		arr[top] = value;
		printf("\nThe value %d is sucessfully pushed into the stack\n",value);
	}
}
void pop()
{
	int data;
	if(isEmpty() == 1)
		printf("\nThe stack is empty. Underflow!\n");
	else
	{
		data = arr[top];
		top = top - 1;
		printf("\nThe popped value is %d \n",data);
	}
	
}

int isFull()
{
	if(top == max - 1)
		return 1;
	else
		return 0;
}


int isEmpty()
{
	if(top == -1)
		return 1;
	else
		return 0;
}

void display()
{
	int i;
	printf("\nThe stack looks like :\n");
	for(i = top; i >= 0; i--)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");

}
void peek()
{
	if(isEmpty() == 1)
		printf("\nNothing is in the stack to peek\n");
	else
		printf("\nThe topmost value of the stack is %d",arr[top]);
}
