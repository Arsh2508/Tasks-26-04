#include <stdio.h>

void read(char *, const int);
void print_num(char *, const int);

int main()
{
	const int n = 5;
	char s[n];
	read(s, n);
	print_num(s, n);
	return 0;	
}
