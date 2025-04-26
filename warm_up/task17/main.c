#include <stdio.h>

int polindrom(int);
int main()
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("Count for polindrom is %d\n", polindrom(num));	

	return 0;
}
