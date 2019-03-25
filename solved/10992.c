#include <stdio.h>

int main(void) {
	int n, i, j, b;
	
	scanf("%d", &n);
	
	if(n == 1) {
		printf("*\n");
		return 0;
	}
	
	b = 1;
	
	for(i=1; i<n; i++) {
		for(j=0; j<n-i; j++)
			printf(" ");
		
		if(i == 1) {
			printf("*\n");
			continue;
		} else {
			printf("*");
			
			for(j=1; j<=b; j++)
				printf(" ");
				
			printf("*\n");
		}
		
		b += 2;
	}
	
	for(i=0; i<(n-1)*2+1; i++)
		printf("*");
		
	printf("\n");
}
