#include <stdio.h>

void mul_table(int n){
	for(int i = 1; i <= 10; ++i){
		printf("%d * %d = %d\n", n, i, n * i);
	}
}
