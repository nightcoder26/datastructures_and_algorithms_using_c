/*
Given a 0-indexed integer array nums, find a 0-indexed integer array answer where:

answer.length == nums.length.
answer[i] = |leftSum[i] - rightSum[i]|.
Where:

leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
Return the array answer.

 

Example 1:

Input: nums = [10,4,8,3]
Output: [15,1,11,22]
Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].
Example 2:

Input: nums = [1]
Output: [0]
Explanation: The array leftSum is [0] and the array rightSum is [0].
The array answer is [|0 - 0|] = [0].
*/
#include<stdio.h>
int main()
{
	int n;
	int r_sum, l_sum;
	int i,j;
	printf("\nEnter the number of elements");
	scanf("%d",&n);
	int nums[n];
	int result[n];
	int rightSum[n],leftSum[n];
	printf("\nEnter elements into the array :");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&nums[i]);
	}
	for(i = 0; i < n; i++)
	{
		l_sum = 0;
		r_sum = 0;
		for(j = i + 1; j < n; j++)
		{
			r_sum = r_sum + nums[j];
		}
		rightSum[i] = r_sum;
		for(j = 0 ; j < i; j++)
		{
			l_sum = l_sum + nums[j];
		}
		leftSum[i] = l_sum;
	}
	for(i = 0; i < n; i++)
	{
		result[i] = leftSum[i] - rightSum[i];
		printf("%d\t",abs(result[i]));
	}
    
	
}
