#include <stdio.h>

int isSosu(int n) {
	int i;
	
	if(n == 1)
		return 0;

	if(n == 2)
		return 1;
	
	for(i=2; i<n; i++) {
		if(n%i == 0)
			return 0;
	}
	
	return 1;
}

int main(void) {
	int n, num, cnt = 0;
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%d", &num);
		
		if(isSosu(num))
			cnt++;
	}
	
	printf("%d", cnt);
}
