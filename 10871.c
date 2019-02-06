#include <stdio.h>

int main(void)
{
	int N, X;
	register int i;
	
	scanf("%d %d", &N, &X);
	
	int A[N];
	
	for(i=0; i<N; i++) {
		scanf("%d", &A[i]);
		
		if(A[i] < X) {
			printf("%d ", A[i]);
		}
	}
}
