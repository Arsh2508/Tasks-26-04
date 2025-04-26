#include <stdio.h>

void read(char *, const int);
void to_upper(char *, const int);
void print(char *, const int);

int main()
{
	const int n = 5;
	char s[n];
	read(s, n);

	to_upper(s, n);

	printf("The changed array is\n");
	print(s, n);	
	
	return 0;	
}
