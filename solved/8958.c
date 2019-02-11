#include <stdio.h>
#include <string.h>

int main(void)
{
	int N, i, j, cnt, score=0;
	char text[80];
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++) {
		scanf(" %s", text);

		score = 0;
		
		for(j=0; j<strlen(text); j++) {
			if(j != 0 && text[j-1] == 'O' && text[j] == 'O') {
				cnt++;
			} else if(text[j] == 'O'){
				cnt = 1;
			} else {
				cnt = 0;
			}
			
			score += cnt;
		}
		
		printf("%d\n", score);
	}

}
