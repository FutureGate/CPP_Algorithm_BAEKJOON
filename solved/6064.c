#include <stdio.h>

int lcm(int m, int n){
	int z, a, b;
	a = m;
	b = n;
	
	while(1) {
		z = a%b;
		if(z == 0)
			break;
		a = b;
		b = z;
	}
	
	return (m*n)/b;
}

int main() {
	int t;
	int m, n, x, y;
	
	scanf("%d", &t);
	
	while(t--) {
		scanf("%d %d %d %d", &m, &n, &x, &y);
		
		int mm = lcm(m, n);
		
		while(x != y && x <= mm) {
			if(x<y)
				x+= m;
			else
				y+= n;
		}
		
		if(x != y)
			printf("-1\n");
		else
			printf("%d\n", x);
	}
}
