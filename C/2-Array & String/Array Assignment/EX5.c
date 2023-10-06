/*
 ============================================================================
 Name        : EX5.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n,i,element;
	printf("Enter number of elements: ");
	fflush(stdout);
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched: ");
	fflush(stdout);
	scanf("%d",&element);
	for(i=0;i<n;i++){
		if(arr[i]==element){
			printf("Number fount at the location= %d",i+1);
			break;
		}
		else if(i==n-1){
			printf("\nNumber is not in the array");
			break;
		}
	}

	return 0;
}
