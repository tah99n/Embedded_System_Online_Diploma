/*
 ============================================================================
 Name        : EX2.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int number);

int main(void){
	int num;
	printf("Enter a positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("\nFactorial of %d = %d",num,factorial(num));
	return 0;
}

int factorial(int number){
	if(number==1||number==0){
		return 1;
	}
	return number*factorial(number-1);
}
