#include <stdio.h>
#include <string.h>

int main(void) {
	char text[51];
	int i, j, T, index, cnt, chk;
	
	scanf("%d", &T);
	
	while(T--) {
		cnt = 0;
		
		scanf(" %s", text);
		
		for(i=0; i<strlen(text); i++) {
			if(text[i] == '(') {
				cnt++;
			} else if(text[i] == ')') {
				index = -1;
				
				for(j=0; j<i; j++) {
					if(text[j] == '(') {
						if(index == -1){
							index = j;
						}
						else if((i-index) > (i-j)) {
							index = j;
						}
					}
				}
				
				if(index == -1)
					break;
				else {
					text[index] = text[i] = ' ';
					cnt--;
				}
			}
		}
		
		if(index == -1 || cnt != 0)
			printf("NO\n");
		else
			printf("YES\n");
	}
	
}
