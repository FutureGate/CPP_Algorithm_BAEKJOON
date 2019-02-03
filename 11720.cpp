#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	register int n, i, sum=0;
	register char nums[100];
	
	cin >> n;
	cin >> nums;

	for(i=0; i<n; i++) {
		sum += nums[i]-48;
	}
	
	cout << sum;
}
