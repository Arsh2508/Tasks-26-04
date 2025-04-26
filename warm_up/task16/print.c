#include <stdio.h>

void print(char * ar, const int n){
	for(int i = 0; i < n; ++i){
		printf("%c ", ar[i]);
	}
	printf("\n");
}
