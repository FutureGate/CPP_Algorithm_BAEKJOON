#include <stdio.h>

void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int pivot = arr[(left + right) / 2];
      int temp;
      do
      {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i<= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
      } while (i<= j);

    /* recursion */
    if (left < j)
        quickSort(arr, left, j);

    if (i < right)
        quickSort(arr, i, right);
}

int main(void) {
	int arr[1000000];
	int N, i;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++) {
		scanf("%d", &arr[i]);
	}
	
	quickSort(arr, 0, N-1);
	
	for(i=0; i<N; i++) {
		printf("%d\n", arr[i]);
		
	}
}
