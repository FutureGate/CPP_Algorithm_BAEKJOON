#include <stdio.h>

unsigned int sum(int n) {
	return (n*(n+1))/2;
}

int main(void)
{
	unsigned int T, x, y, dist, i, cnt;

	
	scanf("%d", &T);
	
	for(i=0; i<T; i++) {
		cnt = 0;
		dist = 0;
		
		scanf("%d %d", &x, &y);
		
		while(x != y) {
			
			if(dist == 0) {
				x += 1;
				dist = 1;
				cnt++;
				continue;
			} else if((dist == 1) && ((x+1) == y)) {

			} else if((x + sum(dist+1)) <= y) {
				dist += 1;
			} else if((x + sum(dist)) <= y) {

			} else if((x + sum(dist-1)) <= y) {
				dist -= 1;
			}
			
			x += dist;
			
			cnt++;
		}
		
		printf("%d\n", cnt);
	}
}
