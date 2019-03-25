#include <stdio.h>

int main(void) {
	int n, i, j, b;
	
	scanf("%d", &n);
	
	if(n == 1) {
		printf("*\n");
		return 0;
	}
	
	b = 1;
	
	for(i=1; i<=n; i++) {
	 for(j=0; j<n-i; j++)
			printf(" ");
		
		if(i == 1) {
			printf("*\n");
		} else {
			for(j=1; j<=b; j++) {
				if(j%2 == 1)
					printf("*");
				else
					printf(" ");
			}
			
			printf("\n");
		}
		
		b += 2;
	}
}
