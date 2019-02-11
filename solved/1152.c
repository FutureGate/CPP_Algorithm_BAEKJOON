#include <stdio.h>
#include <string.h>

int main(void) {
	char text[1000001];
	int cnt=0, i, j;
	
	gets(text);
	
	for(i=1; i<strlen(text); i++) {
		j = i-1;
		
		if(text[j] == ' ' && text[i] != ' ') {
			cnt++;
		} else if(j==0 && text[j] != ' '){
			cnt++;
		}
	}
	
	printf("%d", cnt);
	
}
