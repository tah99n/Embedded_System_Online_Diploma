/*
 ============================================================================
 Name        : EX3.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define stringlen 200

int main(void){
	char Str[stringlen], reverse[stringlen];
	int i,len=0;
	printf("Enter the string :");
	fflush(stdout); fflush(stdin);
	gets(Str);
	len=strlen(Str);
	for(i=0;Str[i]!='\0';i++){
		reverse[i]=Str[len-i-1];
	}
	reverse[len]=0;
	printf("Reverse sting is : %s",reverse);
	return EXIT_SUCCESS;
}
