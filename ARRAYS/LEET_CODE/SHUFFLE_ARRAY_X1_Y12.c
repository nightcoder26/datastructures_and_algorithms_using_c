/*Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7] 
Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].


Input: nums = [1,2,3,4,4,3,2,1], n = 4
Output: [1,4,2,3,3,2,4,1]

*/
#include<stdio.h>
int main()
{
	int a[1000],i,j=0,size,n,result[1000];
	printf("\nEnter number of elemets in the array: ");
	scanf("%d",&size);
	printf("\nEnter elements into the array :");
	for( i = 0; i < size; i++)
	{
		scanf("%d",&a[i]);
	}	
	printf("\nEnter n value: ");
	scanf("%d",&n);
	for(i = 0; i < size; i++)
	{
		result[i] = a[i];
	}
	
	for(i = 0; i < size ; i++)
	{
		if(i % 2 != 0)
		{
			result[i] = a[n];
			n++;
		}
	}
	for(i = 0; i < size ; i++)
	{
		if(i % 2 == 0)
		{
			result[i] = a[j];
			j++;
		}
	}
	
	for( i = 0; i < size; i++)
	{
		printf("%d\t",result[i]);
	}
	return 0;
}
