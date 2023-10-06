/*
 ============================================================================
 Name        : EX3.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int reverse(void);

int main(void){
	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	printf("\n");
	reverse();
	return 0;
}

int reverse(void){
	char x;
	scanf("%c",&x);
	if(x!='\n'){
		reverse();
		printf("%c",x);
	}
}
