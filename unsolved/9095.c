#include <stdio.h>

int comb(int n, int r) {
	
}

int main(void) {
	int x, y, z;
	int t, n, cnt;
	
	scanf("%d", &t);
	
	while(t--) {
		cnt = 0;
		scanf("%d", &n);
		
		for(x=0; x<=n; x++) {
			for(y=0; y<=n; y++) {
				for(z=0; z<=n; z++) {
					printf("%d %d %d : %d\n", x, y, z, (x + (2*x) + (3*z)));
					if((x + (2*y) + (3*z)) == n) {
						cnt++;
					}
				}
			}
		}
		
		printf("%d\n", cnt);
	}
	
}
