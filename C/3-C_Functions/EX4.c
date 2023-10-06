/*
 ============================================================================
 Name        : EX4.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power_calc(int a,int b);

int main(void){
	int base,power;
	printf("Enter base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&base);
	printf("\nEnter power number (positive integer): ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&power);
	printf("\n%d^%d = %d",base,power,power_calc(base,power));
	return 0;
}

int power_calc(int a,int b){
	if(b>0)
		return a*power_calc(a,b-1);
	else
		return 1;
}
