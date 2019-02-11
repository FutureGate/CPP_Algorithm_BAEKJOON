#include <stdio.h>

int main(void) {
	int i, sound[8];
	char *result;
	
	for(i=0; i<8; i++) {
		scanf("%d", &sound[i]);
	}
	
	for(i=1; i<8; i++) {
		sound[i-1] = sound[i-1]-sound[i];
		
		if(i>1) {
			if(sound[i-2] != sound[i-1]) {
				result = "mixed";
				break;
			}
		} else if(sound[0] == 1) {
			result = "descending";
		} else if(sound[0] == -1) {
			result = "ascending";
		}
	}
	printf("%s", result);
}
