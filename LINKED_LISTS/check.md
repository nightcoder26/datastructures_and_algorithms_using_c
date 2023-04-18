```diff
-  void delEnd()
{
	if(head == NULL)
	{
		printf("\nThe linked list is empty !");
	}
	else if(head->link == head)
	{
		free(head);
		head = NULL;
	}
	else
	{
		struct node *temp;
		temp = head;
		while(temp->link->link != head)
		{
			temp = temp->link;
		}
		free(temp->link);
		temp->link = NULL;
		tail = temp;
		tail->link = head;
	}
	printf("\nAfter deleting from the end\n");
	display();
}

+ void delEnd()
{
	struct node *temp;
    temp = head;
	if(head == NULL)
	{
		printf("\nThe list is empty ");
	}
	else if(head->link = head)
	{
		free(head);
		head = NULL;
	}
	else
	{
		while(temp->link->link != head)
		{
			temp = temp->link;
		}
		free(temp->link);
		temp->link = NULL;
		tail = temp;
		tail->link = head;
		
	}
	printf("\nAfter deleting from the end\n");
	display();
}
```
