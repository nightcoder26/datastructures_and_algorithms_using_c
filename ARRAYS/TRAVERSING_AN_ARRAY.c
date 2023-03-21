// A C program to traverse an entire array to print or display n no's
#include<stdio.h>
int main(){
	int i, n;
	printf("\n Enter the number of elements in the array : ");
	scanf("%d",&n);
	int a[n];
	for(i = 0; i < n;i++){
		printf("\n Arr[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nThe array elements are  :\n");
	for(i = 0; i < n; i++){
		printf("%d\t",a[i]);
	}
	return 0;
	
}
