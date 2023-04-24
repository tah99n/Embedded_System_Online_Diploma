/*
 * EX5.c
 *
 *  Created on: 20 Apr 2023
 *      Author: Mahmoud Tahoun
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	char x;
	printf("Enter a charcter: ");
	fflush(stdout);
	scanf("%c",&x);
	printf("\nASCII Value of %c is %d",x,x);
	return EXIT_SUCCESS;
}
