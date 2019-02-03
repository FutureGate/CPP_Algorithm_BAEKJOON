#include <iostream>

using namespace std;

void swap(int *a, int *b) {
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int (sort(int list[5]))[5] {
	int i=0, j=0;
	int size = sizeof(list)/sizeof(int);
	
	for(i=0; i<size; i++) {
		for(j=i+1; j<size; j++) {
			if(list[i] < list[j]) {
				swap(&list[i], &list[j]);
			}
		}
	}
	
	return list;
}

int main(void)
{
	int i=0, cnt;
	int B[5];
	
	string tetris;
	
	
	for(i=0; i<5; i++) {
		cin >> B[i];
	}
	
	cin >> cnt;
	
	cin >> tetris;
	
	B = sort(B);
	
}
