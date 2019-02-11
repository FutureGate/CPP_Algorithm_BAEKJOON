#include <iostream>

using namespace std;

int main(void) {
	unsigned register int min = 2;
	unsigned register int max = 7;
	unsigned register int num = 0;
	unsigned register short cnt = 1;
	
	while(!((1<=num) && (num<=1000000000))) {
		cin >> num;
	}
	
	while(1) {
		if(1000000000 < max)
			max = 1000000000;
		if(num == 1) {
			cnt = 0;
			break;
		}
		
		if((min<=num) && (num<=max))
			break;
			
		cnt++;
		min += 6*(cnt-1);
		max += 6*(cnt);
	}
	
	cout << cnt+1 << endl;
}
