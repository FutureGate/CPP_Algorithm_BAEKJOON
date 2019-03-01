#include <stdio.h>
#include <string.h>

int main(void) {
	char name[101];
	int i;
	
	scanf("%s", name);
	
	for(i=0; i<strlen(name); i++) {
		if(('A' <= name[i]) && (name[i] <= 'Z'))
			printf("%c", name[i]);
	}
}
