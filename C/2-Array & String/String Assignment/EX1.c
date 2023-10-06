/*
 ============================================================================
 Name        : EX1.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define strlen 200

int main(void){
	int i,freq=0;
	char str[strlen],c;
	printf("Enter a string: ");
	fflush(stdout); fflush(stdin);
	gets(str);
	printf("Enter a character to find frequency: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&c);
	for(i=0;i<strlen;i++){
		if(str[i]==c){
			freq++;
		}
	}
	printf("Frequency of %c = %d",c,freq);
	return 0;
}
