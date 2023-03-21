//A C program to take n numbers into an array and convert them into a number
#include<stdio.h>
int main()
{
	int i, size, result;
	printf("\nEnter the number of digits in the array :");
	scanf("%d",&size);
	int nums[size];
	printf("\nEnter the digits into the array :\n");
	for(i = 0 ; i < size; i++)
	{
		printf("\nDigit %d :",i+1);
		scanf("%d",&nums[i]);
	}
	i = 0;
	result = 0;
	while(i<size)
	{
		result = result * 10 + nums[i];
		i++;
	}
	printf("\nThe number formed from the array is : %d",result);
	return 0;
}
