#include<stdio.h>


int main() {
	
	int i, j, arr[6][6] = {0,0};
	
	arr[0][0]++;
	
	for(i = 0; i < 6; i++) {
		
		for(j = 0; j < 6; j++) {
		
			
			printf("%d ",arr[i][j]);
		
		}
		
		printf("\n");
	}        
	
	return 0;
}
