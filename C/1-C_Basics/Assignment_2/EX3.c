/*
 ============================================================================
 Name        : EX3.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
	float x, y, z;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);
	if ( x>=y && x>=z){
		printf("The largest number is: %.2f", x);
	}
	else if (y>=x && y>=z){
		printf("The largest number is: %.2f", y);
	}
	else{
		printf("The largest number is: %.2f", z);
	}
	return 0;
}
