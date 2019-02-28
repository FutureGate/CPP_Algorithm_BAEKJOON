#include <stdio.h>
#include <string.h>

int main(void) {
	int n, num, index = -1;
	int stack[10000];
	char cmd[6];
	
	scanf("%d", &n);
	
	while(n--) {
		scanf(" %s", cmd);
		
		if(strcmp(cmd, "push") == 0) {
			if(index < 9999) {
				scanf(" %d", &num);
			
				stack[++index] = num;
			}
			
		} else if(strcmp(cmd, "pop") == 0) {
			if(index > -1) {
				printf("%d\n", stack[index--]);
			} else if(index == -1)
				printf("-1\n");				
			
		} else if(strcmp(cmd, "size") == 0) {
			printf("%d\n", index+1);		
		} else if(strcmp(cmd, "empty") == 0) {
			if(index == -1)
				printf("1\n");
			else
				printf("0\n");
		} else if(strcmp(cmd, "top") == 0) {
			if(index == -1)
				printf("-1\n");
			else
				printf("%d\n", stack[index]);
		}
	}
}
