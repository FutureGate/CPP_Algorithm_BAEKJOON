#include <stdio.h>
#include <string.h>

int main(void) {
	char code[501];
	int i;
	
	while(1) {
		fgets(code, 501, stdin);
		
		code[strlen(code)-1] = '\0';
		
		if(strcmp(code, "END") == 0)
			break;
		
		for(i=strlen(code)-1; i>=0; i--) {
			printf("%c", code[i]);
		}
		
		printf("\n");
	}
}
