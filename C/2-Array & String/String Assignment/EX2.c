/*
 ============================================================================
 Name        : EX2.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define strlen 200

int main(void){
	char str[strlen];
	int i;
	printf("Enter the String: ");
	fflush(stdout); fflush(stdin);
	gets(str);
	for (i=0;str[i]!='\0';++i);
	printf("Length of String %d", i);
	return EXIT_SUCCESS;
}
