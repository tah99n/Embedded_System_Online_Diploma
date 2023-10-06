/*
 ============================================================================
 Name        : EX4.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
	float a,b;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f%f",&a,&b);
	printf("\nProducut: %f",(a*b));
	return 0;
}
