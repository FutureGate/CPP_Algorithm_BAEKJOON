#include <stdio.h>

int main(void)
{
	int arr[3], i, j;
	int temp;
	
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	
	for(i=0; i<3; i++) {
		for(j=i+1; j<3; j++) {
			if(arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("%d", arr[1]);
}
