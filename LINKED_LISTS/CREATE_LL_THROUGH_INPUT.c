#include<stdio.h>
#include<stdlib.h>
void createList(int);
void displayList(void);
struct node
{
	int data;
	struct node* link;	
};
struct node *head;
int main()
{
	int n, i ;
	printf("\nEnter the number of nodes you want in the linked list :");
	scanf("%d",&n);
	createList(n);
	displayList();
	return 0;
}

void createList(int n)
{
	struct node *new_node, *temp;
	int i;
	head = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data in the nodes :\n");
	scanf("%d",&head->data);
	head->link = NULL;
	temp = head;
	for(i = 2; i <= n; i++)
	{
		new_node = (struct node*)malloc(sizeof(struct node));
		scanf("%d",&new_node->data);
		new_node->link = NULL;
		temp->link = new_node;
		temp = temp->link;
	}
	
}
//A function to display the created linked list

void displayList()
{
	struct node* temp;
	temp = head;
	if(temp == NULL)
	{
		printf("\nThe linked list is empty");
	}
	else
	{
		
		while(temp != NULL)
		{
			printf("%d\t",temp->data);
			temp = temp->link;
		}
		
	}
	
}


