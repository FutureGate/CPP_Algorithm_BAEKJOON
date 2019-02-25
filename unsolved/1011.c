#include <stdio.h>

unsigned int sum(int n) {
	return (n*(n+1))/2;
}

int main(void)
{
	unsigned int T, x, y, dist, i, cnt;
	
	printf("%d\n\n\n", sum(2));
	
	scanf("%d", &T);
	
	for(i=0; i<T; i++) {
		cnt = 0;
		dist = 0;
		
		scanf("%d %d", &x, &y);
		
		while(x != y) {
			printf("Àücnt : %d >> \t x : %d \t y : %d\t dist : %d\t\t\t", cnt, x, y, dist);
			
			if(dist == 0) {
				printf("0\n");
				x += 1;
				dist = 1;
				continue;
			} else if((dist == 1) && ((x+1) == y)) {
				printf("1");
			} else if((x + sum(dist+1)) < y) {
				printf("2 %d", (x + sum(dist+1)));
				dist += 1;
			} else if((x + sum(dist)) < y) {
				printf("3 %d", (x + sum(dist)));
			} else if((x + sum(dist-1)) < y) {
				printf("4 %d", (x + sum(dist-1)));
				dist -= 1;
			}
			
			x += dist;
			
			cnt++;
			printf("ÈÄcnt : %d >> \t x : %d \t y : %d\t dist : %d\n", cnt, x, y, dist);
		}
		
		printf("%d\n", cnt);
	}
}
