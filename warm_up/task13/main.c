#include <stdio.h>

int factorial(int);
int main()
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("The factorial is %d\n", factorial(num));
	return 0;
}
