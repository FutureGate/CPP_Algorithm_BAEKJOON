#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	unsigned int a, b, c, i, j;
	unsigned int result;
	char text[8];
	
	scanf("%d %d %d", &a, &b, &c);
	
	result = a*b*c;
	
	sprintf(text, "%d", result);
	
	for(i='0'; i<='9'; i++) {
		result = 0;
		
		for(j=0; j<strlen(text); j++) {
			if(text[j] == i) {
				result++;
			}
		}
		
		printf("%d\n", result);
	}

}
