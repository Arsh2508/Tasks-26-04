#include <stdio.h>

void print_num(char * ar, const int n){
	for(int i = 0; i < n; ++i){
		if(ar[i] >= 48 && ar[i] <= 57){
			printf("%c ", ar[i]);
		}
	}
	printf("\n");
}
