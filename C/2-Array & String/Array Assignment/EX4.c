/*
 ============================================================================
 Name        : EX4.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n,i,element,location;
	printf("Enter number of elements: ");
	fflush(stdout);
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be inserted: ");
	fflush(stdout);
	scanf("%d",&element);
	printf("Enter the location: ");
	fflush(stdout);
	scanf("%d",&location);
	for(i=n;i>=location;i--){
			arr[i]=arr[i-1];
		}
	n++;
	arr[location-1] = element;
	for(i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
	return 0;
}
