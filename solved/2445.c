#include <stdio.h>

int main(void) {
	int i, j, N;
	
	scanf("%d", &N);
	
	for(i=0; i<=N; i++) {
		if(i==0)
			continue;
		
		for(j=0; j<i; j++) {
			printf("*");
		}
		
		for(j=0; j<2*(N-i); j++) {
			printf(" ");
		}
		
		for(j=0; j<i; j++) {
			printf("*");
		}
		
		printf("\n");
	}
	
	for(i=N-1; i>=0; i--) {
		for(j=0; j<i; j++) {
			printf("*");
		}
		
		for(j=0; j<2*(N-i); j++) {
			printf(" ");
		}
		
		for(j=0; j<i; j++) {
			printf("*");
		}
		
		printf("\n");
	}
}
