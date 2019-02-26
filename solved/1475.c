#include <stdio.h>
#include <string.h>

int main(void) {
	int num[10];
	int i, cnt = 0, chk = 0, chk2 = 1;
	char N[7];
	
	scanf("%s", N);
	
	for(i=0; i<10; i++) {
		num[i] = 0;
	}
	
	for(i=0; i<strlen(N); i++) {
		num[N[i]-'0']++;
	}

	while(chk != 1) {
		for(i=0; i<10; i++) {
			if(i==6 || i==9) {
				if(num[6] > 0)
					num[6]--;
				else if(num[9] > 0)
					num[9]--;
			} else if(num[i] > 0) {
				num[i]--;
			}
		}

		cnt++;
		
		chk2 = 1;
		
		for(i=0; i<10; i++) {
			if(num[i] != 0)
				chk2 = 0;
		}
		
		if(chk2)
			chk = 1;
	}
	
	printf("%d", cnt);
}
