#include <iostream>

using namespace std;

string days[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main(void)
{
	register unsigned int a = 20, b = 7, x, y;
	
	cin >> x >> y;
	
	((x == 1) || (x == 2))? b-=1 : x;
	((x == 1) || (x == 2))? x+=12 : x;
	
	cout << days[((21*a/4)+(5*b/4)+(26*(x+1)/10)+y-1)%7];
}
