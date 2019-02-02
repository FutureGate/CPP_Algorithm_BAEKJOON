#include <iostream>

using namespace std;

int main(void)
{
	unsigned short N;
	unsigned short x = 0, y = 0;
	
	short sum = -1;
	
	cin >> N;
	
	for(x=0; 5*x<=N; x++) {
		for(y=0; 3*y<=N; y++) {
			if(((5*x)+(3*y)) == N) {
				if(sum == -1) {
					sum = x+y;
				} else if(x+y < sum) {
					sum = x+y;
				}
			}
		}
	}
	
	cout << sum;
}
