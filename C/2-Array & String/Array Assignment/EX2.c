/*
 ============================================================================
 Name        : EX2.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n,i;
	printf("Enter the number of data: ");
	fflush(stdout);
	scanf("%d",&n);
	float arr[n],sum=0,average;
	for(i=0;i<n;i++){
		printf("%d.Enter number: ",i+1);
		fflush(stdout);
		scanf("%f",&arr[i]);
	}
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	average=sum/n;
	printf("Average = %.2f",average);
			return 0;
}

