//	A C program to find the smallest number in an array and give its position
//Assuming no two values in the array are same for simplicity
#include<stdio.h>
int main()
{
	int i,n,small,pos;
	printf("Enter the number of elements in the array :");
	scanf("%d",&n);
	int a[n];
	for(i = 0 ; i < n ; i++)
	{
		printf("\nArr[%d] = ",i);
		scanf("%d",&a[i]);
    }
	small = a[0];//Assuming that the first element in the array is the smallest we compare it with 
	//all the other elements present in the array
    for(i = 0; i < n ; i++)
	{
    	if(a[i] < small)
		{
    		small = a[i];
    		pos = i ;
    		
		}
	}
	printf("\nThe smallest value in the array is %d and it is at the position %d",small,pos);
	return 0;	

}
