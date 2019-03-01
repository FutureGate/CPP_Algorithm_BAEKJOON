#include <stdio.h>
#include <string.h>

int main(void) {
	int broken[10];
	int n, m, i, cnt;
	char num[6];
	
	for(i=0; i<10; i++) {
		broken[i] = 0;
	}
	
	scanf("%d %d", &n, &m);

	while(m--) {
		scanf("%d", &i);
		
		broken[i] = 1;
	}
	
	if(n == 100) {
		printf("0");
		return 0;
	}
	
	sprintf(num, "%d", n);
	
	for(i=0; i<strlen(num); i++) {
		int target = num[i] - '0';
		int dist = 0;
		
		while(1) {
			if(broken[target - dist] == 0)
		}
		
	}
	
}
