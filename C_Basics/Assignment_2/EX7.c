/*
 * EX7.c
 *
 *  Created on: 23 Apr 2023
 *      Author: Mahmoud Tahoun
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,i;
	unsigned long long fact=1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&x);
	if(x<0){
		printf("Error!!! Factorial of negative number doesn't exist.");
	}else{
		for(i=2;i<=x;i++){
			fact*=i;
		}
		printf("%d Factorial = %llu",x,fact);
	}

	return EXIT_SUCCESS;
}
