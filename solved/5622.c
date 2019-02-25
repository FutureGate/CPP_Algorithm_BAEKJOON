#include <stdio.h>
#include <string.h>

int main(void)
{
	char dial[16];
	int i, sum = 0;
	
	scanf(" %s", dial);
	
	for(i=0; i<strlen(dial); i++) {
		char num = dial[i];
		
		if(('A' <= num) && (num <= 'R'))
			num -= 'A';
		else if(('S' <= num) && (num <= 'Y'))
			num -= 'B';
		else
			num -= 'C';

		num /= 3;
		num += 2;
		
		sum += ( 1 + num );
	}
	
	printf("%d", sum);
}
