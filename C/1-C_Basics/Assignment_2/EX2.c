/*
 ============================================================================
 Name        : EX2.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	char x;
	printf("Enter a letter of the alphabet: ");
	fflush(stdout);
	scanf("%c",&x);
	if(x=='i'||x=='o'||x=='u'||x=='e'||x=='a'||x=='I'||x=='O'||x=='U'||x=='E'||x=='A'){
		printf("\n%c is a vowel",x);
	}else{
		printf("\n%c is a consonant",x);
	}
	return 0;
}
