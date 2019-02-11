#include <iostream>
using namespace std;

int main(void) {
	unsigned register int i = 0;
	unsigned register int j = 0;
	
	unsigned register int num = 0;
	
	while(!((1<=num) && (num<=100))) {
		cin >> num;
	}
	
	for(i=1; i<=num; i++) {
		for(j=0; j<i; j++) {
			cout << "*";
		}
		
		cout << "\n";
	}
}
