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
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&x);
	if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')){
		printf("%c is an alphabet.",x);
	}else{
		printf("%c is not an alphabet.",x);
	}
	return 0;
}

