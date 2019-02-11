#include <stdio.h>

int main(void)
{
	int arr[5], sum=0, i;
	
	for(i=0; i<5; i++) {
		scanf("%d", &arr[i]);
	
		(arr[i] >= 40)? (sum += arr[i]) : (sum += 40);
	}
	
	printf("%d", sum/5);
}
