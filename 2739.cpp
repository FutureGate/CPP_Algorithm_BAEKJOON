#include <iostream>

using namespace std;

int main(void)
{
	unsigned int N, i;
	
	cin >> N;
	
	for(i=1; i<=9; i++) {
		printf("%d * %d = %d\n", N, i, N*i);
	}
}
