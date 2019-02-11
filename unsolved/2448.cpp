#include <iostream>

using namespace std;

string triangle(int level) {
	string tri = "";
	static int i=0;
	static int lineSize = 1;
	static int blankSize = 1;
	
	if(level == 1) {
		
		
		tri += "*";
		cout << "!";
	} else {
		tri = triangle(level-1);
	}
}

int main(void) {
	string result = triangle(4);	
}
