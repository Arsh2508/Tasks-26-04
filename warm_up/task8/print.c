#include <stdio.h>

void print(int* ar1, int* ar2, const int n, const int m){
	for(int i = 0; i < n + m; ++i){
		if(i < n){
			printf("%d ", ar1[n - i - 1]);
		}
		else{
			printf("%d ", ar2[m - (i - n) - 1]);
		}
	}
	printf("\n");
}
