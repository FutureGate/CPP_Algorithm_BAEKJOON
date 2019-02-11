#include <stdio.h>
#include <math.h>

int main(void) {
	int i, j, k, l, m;
	
	int before, star[3] = {1, 3, 5}, triLineCount = 1, starCount, triangleCount = 0;
	
	int N = 3;
	
	//scanf("%d", &N);

	before = N-1;

	for(i=0; 3*i<N; i++) {
		for(j=0; j<3; j++) {
			for(k=0; k<before; k++)
				printf(" ");
			
			starCount = 0;
			
			for(k=1; k<=triLineCount; k++) {
				for(l=0; l<star[j]; l++) {
					if(j==1 && l==1) {
						printf(" ");
						starCount++;
						continue;
					}
					
					printf("*");
					starCount++;
					
					if(starCount % star[j] == 0){
						for(m=0; m<star[2-j]; m++) {
							printf(" ");
						}
					}
				}
			}
			
			before--;
			
			printf("\n");
		}
		
		triangleCount += triLineCount;
		triLineCount++;
	}
	
	printf("\n%d\n", triangleCount);
}
