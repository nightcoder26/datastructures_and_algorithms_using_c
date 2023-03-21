//A C program to delete an element from an array 
#include<stdio.h>
int main()
{
	int i , n , pos;
	printf("\nEnter the number of elements in the array :");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter elements into the array :");
	for(i = 0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe array is :\n");
	for(i = 0; i < n; i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter the position at which you want to delete an element:");
	scanf("%d",&pos);
	for(i = pos - 1; i < n - 1 ; i++)
	{
		a[i]=a[i+1];
	}
	n--;
	printf("\nThe array after deletion of the element at the position %d:\n",pos);
	for(i = 0 ; i < n; i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
