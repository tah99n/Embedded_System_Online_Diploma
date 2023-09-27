/*
 ============================================================================
 Name        : EX3.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i,j,r,c;
	printf("Enter rows and column of matrix:\n");
	fflush(stdout);
	scanf("%d%d",&r,&c);
	int m[r][c],transpose[c][r];
	printf("\nEnter elements of matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%d",&m[i][j]);
		}
	}
	printf("\nEntered matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			transpose[i][j] = m[j][i] ;
		}
	}
	printf("\nTranspose of Matrix:\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
