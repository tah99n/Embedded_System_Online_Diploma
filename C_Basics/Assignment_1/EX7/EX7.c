/*
 * EX7.c
 *
 *  Created on: 20 Apr 2023
  *      Author: Mahmoud Tahoun
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	float a,b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("\nEnter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping, value of a= %.2f\nAfter swapping, value of b= %.2f",a,b);
	return EXIT_SUCCESS;
}
