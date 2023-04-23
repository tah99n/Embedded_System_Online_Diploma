/*
 * EX6.c
 *
 *  Created on: 20 Apr 2023
  *      Author: Mahmoud Tahoun
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	float a,b,temp;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("\nEnter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=a;
	printf("\nAfter swapping, value of a= %.2f\nAfter swapping, value of b= %.2f",a,b);
	return EXIT_SUCCESS;
}
