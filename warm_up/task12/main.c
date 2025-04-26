#include <stdio.h>

void mul_table(int);
int main()
{
	for(int i = 1; i < 10; ++i){
		mul_table(i);
		printf("\n");
	}
	return 0;
}
