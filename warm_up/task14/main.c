#include <stdio.h>

int sum(int);

int main()
{
	printf("Enter a number: ");
	int num = 0;
	scanf("%d", &num);
	
	printf("The sum of %d's digits is %d\n", num, sum(num));
	return 0;
}
