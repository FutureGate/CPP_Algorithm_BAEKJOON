#include <stdio.h>

int main(void)
{
	int C, N, i, j, cnt;
	
	float sum = 0;
	
	scanf("%d", &C);
	
	for(i=0; i<C; i++) {
		scanf("%d", &N);
		
		float arr[N];
		
		sum = 0.0;
		cnt = 0;
		
		for(j=0; j<N; j++) {
			scanf("%f", &arr[j]);
			
			sum += arr[j];
		}
		sum = sum/N;
		for(j=0; j<N; j++) { 
			if(arr[j] > sum)
				cnt++;
		}
		printf("%.3f%%\n", (float)cnt/N*100);
	}
}
