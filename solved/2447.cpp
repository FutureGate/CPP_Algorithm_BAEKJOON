#include <iostream>

using namespace std;

char arr[6561][6561];

void draw(int x, int y, int n) {
	if(n == 3) {
		arr[y][x] = '*';
		arr[y][x+1] = '*';
		arr[y][x+2] = '*';
		arr[y+1][x] = '*';
		arr[y+1][x+2] = '*';
		arr[y+2][x] = '*';
		arr[y+2][x+1] = '*';
		arr[y+2][x+2] = '*';
		return;
	}
	
	draw(x, y, n/3);
	draw(x + (n/3), y, n/3);
	draw(x + (n/3)*2, y, n/3);
	draw(x, y + (n/3), n/3);
	draw(x + (n/3)*2, y + (n/3), n/3);
	draw(x, y + (n/3)*2, n/3);
	draw(x + (n/3), y + (n/3)*2, n/3);
	draw(x + (n/3)*2, y + (n/3)*2, n/3);
	
}

int main(void) {
	int n;

	cin >> n;
	
	if(n == 1) {
		cout << "*" << endl;
		return 0;
	} else {
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				arr[i][j] = ' ';
				
		draw(0, 0, n);
	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cout << arr[i][j];
		}
		
		cout << "\n";
	}
}
