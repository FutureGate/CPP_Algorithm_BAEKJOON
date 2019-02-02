#include <iostream>

using namespace std;

int main(void) {
	unsigned register int i = 0;
	unsigned register int j = 0;
	
	unsigned register int num = 0;
	
	cin >> num;
	
	for(i=num; i>=1; i--) {
		for(j=0; j<i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}
