/*
 ============================================================================
 Name        : EX5.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
	char x;
	printf("Enter a charcter: ");
	fflush(stdout);
	scanf("%c",&x);
	printf("\nASCII Value of %c is %d",x,x);
	return 0;
}
