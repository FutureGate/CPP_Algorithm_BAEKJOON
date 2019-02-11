#include <iostream>

using namespace std;

int main(void) {
	unsigned register int a = 1;
	unsigned register short b = 1;
	unsigned register int num = 0;
	
	while(!((1<=num) && (num<=10000000))) {
		cin >> num;
	}
	
	if(num==1) {
		cout << "1/1" << endl;
		return 0;
	}
	
	while(1) {
		if(a>=num)
			break;
		
		b++;
		a += b;
	}
	
	num -= (a-b);
	
	if(b%2 == 0){
		a = 1+(num-1);
		b = b-(num-1);
	} else {
		a = b;
		a = a-(num-1);
		b = 1+(num-1);
	}
	
	cout << a << "/" << b << endl;
}
