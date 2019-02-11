#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int i;
	
	gets(str);
	
	for(i=0; i<strlen(str); i++) {
		printf("%c", str[i]);
		
		if((i+1)%10 == 0 && (i+1)!=0) {
			printf("\n");
		}
	}
}
