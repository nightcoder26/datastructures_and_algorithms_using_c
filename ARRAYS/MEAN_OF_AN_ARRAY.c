//A C program to find the mean of n numbers using arrays
#include<stdio.h>
int main(){
	int i , n ,sum = 0;
	float mean;
	printf("\nEnter the number of elements in the array : ");
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i < n; i++){
		printf("\nArr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(i = 0; i< n ; i++)
	    sum += arr[i];
	mean = (float)sum/n;  // Here only sum is converted to float because if we use
	//(float)(sum/n) sum/ n is first computed by int / int giving an int and then 
	//later converting it into float by adding .00 if we use (float)sum / n we are only
	//converting sum to float then evaluating sum/n in float / int format giving a float
	//Hence either sum or n or both are converted to float but not the end result
	printf("\nThe sum of elements in the array : %d",sum);
	printf("\nThe mean of all the elements : %f",mean);
}
