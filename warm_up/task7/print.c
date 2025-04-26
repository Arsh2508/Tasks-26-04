#include <stdio.h>

void print(int* ar1, int* ar2, const int n){
	for(int i = 0; i < 2 * n; ++i){
		if(i < n){
			printf("%d ", ar1[i]);
		}
		else{
			printf("%d ", ar2[i - n]);
		}
	}
	printf("\n");
}
