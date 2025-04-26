#include <stdio.h>

void read_arr(int * arr, const int n){
	printf("Enter array's elements\n");
	for(int i = 0; i < n; ++i){
		scanf("%d", arr + i);
	}
}
