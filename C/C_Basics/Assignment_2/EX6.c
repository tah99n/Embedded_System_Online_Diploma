/*
 * EX6.c
 *
 *  Created on: 23 Apr 2023
 *      Author: Mahmoud Tahoun
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,i,sum=0;
	    printf("Enter an integer: ");
	    fflush(stdout);
	    scanf("%d",&x);
	    for(i=0;i<=x;i++){
	    	sum+=i;
	    }
	    printf("Sum: %d",sum);

	return EXIT_SUCCESS;
}
