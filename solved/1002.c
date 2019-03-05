#include <stdio.h>
#include <math.h>

int main(void) {
	int t, x1, y1, x2, y2;
	int r1, r2, dist, sum;

	int cnt;

	scanf("%d", &t);

	while(t--) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		if((x1 == x2) && (y1 == y2)) {
			if(r1 == r2)
				cnt = -1;
			else
				cnt = 0;
		} else {
			dist = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);

			if(((r1 - r2)*(r1 - r2) == dist) || ((r1 + r2)*(r1 + r2) == dist)) {
				cnt = 1;
			} else if(((r1 + r2)*(r1 + r2) < dist) || ((r1 - r2)*(r1 - r2) > dist)) {
				cnt = 0;
			} else if((r1 + r2)*(r1 + r2) > dist) {
				cnt = 2;
			}
		}

		printf("%d\n", cnt);
	}

}
