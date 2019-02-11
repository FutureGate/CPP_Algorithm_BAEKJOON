#include <stdio.h>
#include <string.h>

int d(int number) {
	char num[6];
	int i = 0, result = 0;
	
	sprintf(num, "%d", number);
	
	result += number;
	
	for(i=0; i<strlen(num); i++) {
		result += (num[i] - 48);
	}
	
	return result;
}

int main(void)
{
	unsigned int n = 1, temp=0, cst[10000] = { 0, };
	int a = 0;
	
	for(n=1; n<=10000; n++) {
		if(n == 1 || n%10 == 0) {
			temp = d(n);
			
			if(temp <= 10000)
				cst[temp] = 1;
		} else {
			temp += 2;
			
			if(temp <= 10000)
				cst[temp] = 1;
		}
		
		if(cst[n] == 0) {
			printf("%d\n", n);
		}
	}
}
