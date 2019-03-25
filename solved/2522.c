#include <stdio.h>

int main(void) {
	int n, s=1, i, is = 0;
	
	scanf("%d", &n);
	
	while(s != 0) {
		i = s;
		
		while(i--)
			printf("*");
		printf("\n");
		
		if(s == n)
			is = 1;
		
		if(is == 0)
			s++;
		else
			s--;
	}
}
