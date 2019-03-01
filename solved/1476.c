#include <stdio.h>

int main(void) {
	int e, s, m, cnt = 0;
	int x, y, z;
	
	x = y = z = 0;
	
	scanf("%d %d %d", &e, &s, &m);
	
	while(1) {
		x++; y++; z++;
		cnt++;
		
		if(x > 15)
			x = 1;
		if(y > 28)
			y = 1;
		if(z > 19)
			z = 1;
			
		if((e == x) && (s == y) && (m == z))
			break;
	}
	
	printf("%d", cnt);
}
