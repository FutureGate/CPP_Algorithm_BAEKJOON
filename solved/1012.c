#include <stdio.h>

char arr[50][50];

void protect(int x, int y) {
	if(x < 0 || x > 49 || y < 0 || y > 49)
		return;
	
	if(arr[x][y] == 1)
		arr[x][y] = 2;
	else
		return;
		
	protect(x-1, y);
	protect(x+1, y);
	protect(x, y-1);
	protect(x, y+1);
}

int main(void) {
	int t, m, n, k, x, y;
	int i, j, cnt;
	
	scanf("%d", &t);

	while(t--) {
		cnt = 0;
		
		scanf("%d %d %d", &m, &n, &k);
		
		for(i=0; i<m; i++) {
			for(j=0; j<n; j++) {
				arr[i][j] = 0;
			}
		}
		
		for(i=0; i<k; i++) {
			scanf("%d %d", &x, &y);
			
			arr[x][y] = 1;
		}
		
		for(i=0; i<m; i++) {
			for(j=0; j<n; j++) {
				if(arr[i][j] == 1) {
					protect(i, j);
					cnt++;
				}
			}
		}

		printf("%d\n", cnt);
	}
} 
