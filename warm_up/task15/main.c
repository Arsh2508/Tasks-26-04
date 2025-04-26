#include <stdio.h>

int power(int, int);
int main()
{
	int num = 0; 
	int exp = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	do{
		printf("Enter positive exponent: ");
		scanf("%d", &exp);
	}while(exp < 1);

	printf("%d to power %d is %d\n", num, exp, power(num, exp));
	return 0;
}
