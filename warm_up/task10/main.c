#include <stdio.h>

int fib(int);
int main()
{
	int num = 0;
	do{
		printf("Enter non-negative number: ");
		scanf("%d", &num);
	}while(num < 0);
	
	printf("The %d'th fibonacci number is %d\n", num, fib(num));
	return 0;
}
