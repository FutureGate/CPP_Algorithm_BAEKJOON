#include <stdio.h>

int main(void)
{
	int N, i, index = 0;
	
	float A = 0.0, M, temp;
	
	scanf("%d", &N);
	
	float arr[N];
	
	for(i=0; i<N; i++) {
		scanf("%f", &arr[i]);
	}
	
	M = arr[0];
	
	for(i=1; i<N; i++) {
		if(arr[i] > M) {
			M = arr[i];
			index = i;
		}
	}
	
	for(i=0; i<N; i++) {
		A += (arr[i]/M)*100.0;
	}

	printf("%.2f", A/N);
}
