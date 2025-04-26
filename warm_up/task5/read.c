#include <stdio.h>

void read(char * arr, const int n){
	printf("Enter %d elements of array\n", n);
	for(int i = 0; i < n; ++i){
		scanf(" %c", arr + i);
	}
}
