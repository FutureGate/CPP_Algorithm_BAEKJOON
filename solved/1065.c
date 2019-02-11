#include <stdio.h>
#include <string.h>

int isSuYeol(int num) {
	int a, b;
	char temp[4];
	
	sprintf(temp, "%d", num);
	
	a = temp[1] - temp[0];
	b = temp[2] - temp[1];
	
	if(a == b)
		return 1;
	else
		return 0;
}

int main(void)
{
	unsigned int N, result = 0, i;
	
	scanf("%d", &N);
	
	if(N < 100)
		result = N;
	else {
		result = 99;
		
		if(N == 1000)
			N -= 1;
		
		for(i=100; i<=N; i++) {
			if(isSuYeol(i) == 1) {
				result++;
			}
				
		}
	}
	
	printf("%d", result);
}
