#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string text;
	string alpha[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int i, pos, sum = 0;;
	
	cin >> text;

	for(i=0; i<8; i++) {
		while((pos = text.find(alpha[i])) != string::npos) {
			sum += 1;
			text.replace(pos, alpha[i].length(), " ");
		}
	}
	
	for(i=0; i<text.length(); i++) {
			if(text.at(i) == ' ')
				continue;
			sum += 1;
		}
	
	cout << sum;
}
