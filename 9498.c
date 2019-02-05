#include <stdio.h>

int main(void)
{
	unsigned char S;
	
	scanf("%d", &S);
	
	S = S/10;
	
	(S == 10 || S == 9)? printf("A") : ((S == 8)? printf("B") : ((S == 7)? printf("C") : ((S == 6)? printf("D") : printf("F"))));
}
