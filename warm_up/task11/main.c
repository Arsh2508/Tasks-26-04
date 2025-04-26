#include <stdio.h>

void mul_table(int);
int main()
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	mul_table(num);
	return 0;	
}
