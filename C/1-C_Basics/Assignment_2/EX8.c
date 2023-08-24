/*
 * EX8.c
 *
 *  Created on: 23 Apr 2023
 *      Author: Mahmoud Tahoun
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char operator;
	float a,b,c;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f%f",&a,&b);

	switch(operator){
		case('+'):
			c=a+b;
			printf("%.1f %c %.1f = %.1f",a,operator,b,c);
			break;
		case('-'):
			c=a-b;
			printf("%.1f %c %.1f = %.1f",a,operator,b,c);
			break;
		case('*'):
			c=a*b;
			printf("%.1f %c %.1f = %.1f",a,operator,b,c);
			break;
		case('/'):
			c=a/b;
			printf("%.1f %c %.1f = %.1f",a,operator,b,c);
			break;
		default:
			printf("Error! operator is not correct");
			break;
	}
	return EXIT_SUCCESS;
}
