#include <stdio.h>

int main(void) {
	int i, T, w, h, n;
	
	scanf("%d", &T);
	
	for(i=0; i<T; i++) {
		scanf("%d %d %d", &h, &w, &n);
	
		if(n%h == 0)
			printf("%d", h);
		else
			printf("%d", n%h);
			
		printf("%02d\n", ((n-1)/h)+1);
	}
}
