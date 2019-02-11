#include <stdio.h>

int main(void)
{
	int N, N2 = -1, org, cnt = 0;
	
	scanf("%d", &N);
	
	org = N;
	
	do {
		if(N < 10) {
			N2 = N;
		} else {
			N2 = N/10 + N%10;
		}
		
		N = (N%10)*10 + (N2%10);
		
		N2 = -1;
		cnt++;
	} while(N != org);
	
	printf("%d", cnt);	
}
