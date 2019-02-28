#include <stdio.h>
 
int arr[41];
 
int fibonacci(int n){
    if(n <= 0){
        arr[0] = 0;
        return 0;
    }else if(n ==1){
        arr[1] = 1;
        return 1;
    }
    if(arr[n] != 0){
        // 계산된 값
        return arr[n];
    } else {
        return arr[n] = fibonacci(n-1) + fibonacci(n-2);
    }
}
 
int main(void){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int x;
        scanf("%d", &x);
        if(x == 0){
            printf("%d %d\n", 1, 0);
        }else if(x == 1){
            printf("%d %d\n", 0, 1);
        }else{
            fibonacci(x);
            printf("%d %d\n", arr[x-1], arr[x]);
        }
    }
    
    return 0;
}
