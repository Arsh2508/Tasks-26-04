#include <stdio.h>

int print_mul(int *ar1, int *ar2, const int n){
	for(int i = 0; i < n; ++i){
		printf("arr1[%d] * arr2[%d] = %d\n", ar1[i], ar2[i], ar1[i]*ar2[i]);
	}
}
