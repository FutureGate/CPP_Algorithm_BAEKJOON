#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[101];
	int N, check[27] = { 0, }, i, j, cnt = 0;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++) {
		scanf(" %s", text);
		
		for(j=0; j<27; j++)
			check[j] = 0;
		
		for(j=0; j<strlen(text); j++) {
			if((j != 0) && (text[j-1] == text[j])) {
				continue;	
			} else if(check[text[j]-'a'] == 0) {
				check[text[j]-'a'] = 1;
			} else if(check[text[j]-'a'] == 1) {
				check[26] = 1;
			}
		}
		
		if(check[26] == 0)
			cnt++;
	}
	
	printf("%d", cnt);
}
