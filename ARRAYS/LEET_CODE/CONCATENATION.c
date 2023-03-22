/*
Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

Specifically, ans is the concatenation of two nums arrays.

Return the array ans.

 

Example 1:

Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
Example 2:

Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
- ans = [1,3,2,1,1,3,2,1]

*/

#include<stdio.h>
int main()
{
	int nums[50],n,i,ans[50],j;
	printf("\nEnter the number of elements in the array :");
	scanf("%d",&n);
	printf("\nEnter the elements into the array :\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&nums[i]);
	}
	printf("\nThe array now looks like : \n");
	for(i = 0; i < n; i++)
	{
		printf("%d\t",nums[i]);
	}
	for(i = 0; i < n; i++)
	{
		ans[i] = nums[i];
	}
	for(i = 2 * n - 1; i >= n; i--)
	{
		j = i - n;
	   ans[i]=nums[j];
	}
	printf("\nThe array after concatenation looks like : \n");
	for(i = 0; i < 2*n; i++)
	{
		printf("%d\t",ans[i]);
	}
	return 0;
}
