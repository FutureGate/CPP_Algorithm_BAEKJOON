#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[101];
	int i, alpha[26];
	
	scanf(" %s", text);
	
	for(i=0; i<26; i++) {
		alpha[i] = -1;
	}
	
	for(i=0; i<strlen(text); i++) {
		if(alpha[text[i] - 97] == -1)
			alpha[text[i] - 97] = i;
	}
	
	for(i=0; i<26; i++) {
		printf("%d ", alpha[i]);
	}
}
