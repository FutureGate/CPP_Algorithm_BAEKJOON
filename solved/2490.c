#include <stdio.h>

int main(void) {
	int cnt, num, t, n=3;
	
	while(n--) {
		t=4;
		cnt = 0;
		
		while(t--) {
			scanf("%d", &num);
			
			if(num == 1)
				cnt++;
		}
		
		switch(cnt) {
			case 0:
				printf("D\n");
				break;
			case 1:
				printf("C\n");
				break;
			case 2:
				printf("B\n");
				break;
			case 3:
				printf("A\n");
				break;
			case 4:
				printf("E\n");
				break;	
		}
	}
}
