#include <stdio.h>

int main(void)
{
	unsigned int T, x, y, dist, cnt;
	unsigned int result, size;
	register int i, j;

	scanf("%d", &T);
	
	for(i=0; i<T; i++) {
		result = 0;
		cnt = 0;
		size = 1;
		
		scanf("%d %d", &x, &y);
		
		dist = y-x;
		
		while(result != dist) {
			if(result > dist) {
				if(dist <= (result - (cnt/2))) {
					cnt = cnt-1;
				}
				break;
			}
				
			result += 2*size;
			cnt += 2;
	
			size++;
		}
		
		printf("%d\n", cnt);
	}
}
