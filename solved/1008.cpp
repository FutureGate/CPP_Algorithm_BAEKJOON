#include <iostream>

using namespace std;

int main(void)
{
	unsigned register char a, b;
	
	cin >> a >> b;
	
	cout.precision(15);
	cout << (a-48)/(double)(b-48);
}
