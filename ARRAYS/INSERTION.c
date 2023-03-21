// A C program to insert an element at a given position in an array
#include<stdio.h>
int main()
{
	int i, n , val , pos;
	printf("\nEnter the number of elements in the array : ");
	scanf("%d",&n);
	int a[n+1];
	for(i = 0; i < n; i++)
	{
		printf("\nArr[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the value your want to insert in the array : ");
	scanf("%d",&val);
	printf("\nEnter the index at which you want to insert the vaue :");
	scanf("%d",&pos);
	for(i = n - 1 ; i >= pos; i--)
	{
		a[i+1] = a[i];
	}
	a[pos] = val;
	printf("\nThe array after insertion is  :");
	for(i = 0; i < n + 1; i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
