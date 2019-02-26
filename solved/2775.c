#include <stdio.h>

int kn[15][14];

int main(void) {
	int i, j, k, n, T;
	
	scanf("%d", &T);
	
	for(i=0; i<14; i++) {
		kn[0][i] = i+1;
	}
	
	for(i=1; i<15; i++) {
		for(j=0; j<14; j++) {
			if(j == 0)
				kn[i][j] = kn[i-1][j];
			else
				kn[i][j] = kn[i-1][j] + kn[i][j-1];
		}
	}
	
	for(i=0; i<T; i++) {
		scanf("%d %d", &k, &n);
		
		printf("%d\n", kn[k][n-1]);
		
	}
}
