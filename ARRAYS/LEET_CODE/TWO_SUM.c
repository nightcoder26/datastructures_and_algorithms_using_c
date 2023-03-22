/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/

#include<stdio.h>
int main()
{
    int i, j, n,target,r[2];
    printf("\nEnter the size of the array :");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter elements onto the array :\n");
    for(i = 0; i < n ; i++)
	{
		printf("\nArr[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the target sum of 2 elements of the array :");
	scanf("%d",&target);
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(a[i] + a[j] == target)
            {
                r[0] = i;
                r[1] = j;
            }
        }
    }
    printf("\nThe sum of a[%d] + a[%d] = %d ",r[0],r[1],target);
    printf("\ni.e., %d + %d = %d",a[r[0]],a[r[1]],target);
    
 return 0;
}
