/*
 ============================================================================
 Name        : EX1.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int primenumber_check(int n);

int main(void) {
	int i,start,finish;
	printf("Enter two numbers (intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&start,&finish);
	printf("\nPrime numbers between %d and %d are: ",start,finish);
	for(i=start;i<=finish;i++){
		if(primenumber_check(i)){
			printf("%d ",i);
		}
	}
	return 0;
}

int primenumber_check(int n){
	int i;
	if(n==0||n==1){
		return 0;
	}
	for(i=2;i<n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

