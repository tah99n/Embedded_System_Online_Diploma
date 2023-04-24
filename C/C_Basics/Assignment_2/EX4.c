/*
 * EX4.c
 *
 *  Created on: 23 Apr 2023
 *      Author: Mahmoud Tahoun
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x;
	    printf("Enter a number: ");
	    fflush(stdout);
	    scanf("%f",&x);
	    if (x>0){
	        printf("\n%.2f is positive", x);
	    }
	    else if (0>x){
	        printf("\n%.2f is negative", x);
	    }
	    else{
	        printf("\nYou entered Zero");
	    }
	return EXIT_SUCCESS;
}
