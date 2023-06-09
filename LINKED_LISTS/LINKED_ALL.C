#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;	
};
void createList(int);
void display();
void insertBegin();
void insertEnd();
void insert();
void delBegin();
void delEnd();
void del();
struct node* head;
int main()
{
	int n,choice;
	printf("\nEnter the number of nodes in your linked list :");
	scanf("%d",&n);
	createList(n);
	printf("\n1. Display the linked list");
	printf("\n2.Insert at the beginning");
	printf("\n3.Insert at the end");
	printf("\n4.Insert at any position ");
	printf("\n5.Delete at the beginning");
	printf("\n6.Delete at the end");
	printf("\n7.Delete at any position");
	printf("\n");
	printf("\nEnter a choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:display();
				break;
		case 2: insertBegin();
				break;
		case 3:insertEnd();
				break;
		case 4:insert();
				break;
		case 5:delBegin();
				break;
		case 6:delEnd();
				break;
		case 7:del();
				break;
		default:
				break;

	}
	
}

void createList(int n)
{
	struct node *temp,* new_node;
	int i;
	head = (struct node*)malloc(sizeof(struct node));
	temp = head;
	if(n != 0)
	{
	
	printf("\nEnter the elements into the linked list :");
	scanf("%d",&head->data);
	head->link = NULL;
	if(n > 1)
	{
	for(i = 2; i <= n; i++)
	{
			new_node = (struct node*)malloc(sizeof(struct node));
			scanf("%d",&new_node->data);
			new_node->link = NULL;
			
			temp->link = new_node;
			temp = temp->link;
	}
	}
	}
	else
	{
		head = NULL;
		printf("List cannot be created as it is empty");
	}
	
}

void display(void)
{
	struct node *temp;
	temp = head;
	while(temp != NULL)
	{
		printf("%d\t",temp->data);
		temp = temp->link;
	}
}

void insertBegin()
{
	int value;
	struct node *new_node;
	printf("\nEnter the value you want to insert at the beginning ");
	scanf("%d",&value);
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = value;
	new_node->link = head;
	head = new_node;
	display();
}

void insertEnd()
{
	int value;
	struct node *new_node,*temp;
	temp = head;
	printf("\nEnter the value to insert at the end");
	scanf("%d",&value);
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = value;
	new_node->link = NULL;
	while(temp->link != NULL)
	{
		temp = temp->link;
	}
	temp->link = new_node;
	display();
}

void insert()
{
	int value,pos;
	struct node *temp,*new_node;
	temp = head;
	printf("\nEnter the value to insert");
	scanf("%d",&value);
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = value;
	new_node->link = NULL;
	printf("\nEnter the position :");
	scanf("%d",&pos);
	if(pos == 1)
	{
		new_node->link = head;
		head = new_node;
	
	}
	else
	{
		pos = pos - 1;
		while(pos != 1)
		{
			temp = temp->link;
			pos--;
		}
		new_node->link = temp->link;
		temp->link = new_node;
	}
	display();
}

void delBegin()
{
	if(head == NULL)
	{
		printf("\nThe linked list is empty");
	}
	else if(head ->link == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		struct node *temp;
		temp = head;
		head = head->link;
		free(temp);
		temp = NULL;
	}
	printf("\nAfter deleting from Beginning\n");
	display();
}

void delEnd()
{
	if(head == NULL)
	{
		printf("\nThe linked list is empty !");
	}
	else if(head->link == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		struct node *temp;
		temp = head;
		while(temp->link->link != NULL)
		{
			temp = temp->link;
		}
		free(temp->link);
		temp->link = NULL;
	}
	printf("\nAfter deleting from the end\n");
	display();
}


void del()
{
	int target_data;
	struct node *prev, *current;
	prev = head;
	current = NULL;
	printf("\nEnter the data you want to delete :");
	scanf("%d",&target_data);
	if(prev == NULL)
	{
		printf("\nEmpty");
	}
    else if (prev != NULL && prev->data == target_data) {
        head = prev->link;
        free(prev);
    }
    else
    {
    while (prev != NULL && prev->data != target_data) {
        current = prev;
        prev = prev->link;
    }
 
    if (prev == NULL)
        printf("\nNot found");
 
    current->link = prev->link;
 
    free(prev);
}
	printf("\nThe linked list after deleting %d is\n",target_data);
	display();
	
}

