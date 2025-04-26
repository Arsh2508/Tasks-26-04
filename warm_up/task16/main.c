#include <stdio.h>

void reverse(char*, const int);
void read(char*, const int);
void print(char*, const int);

int main()
{
	const int n = 5;
	char arr[n];
	read(arr, n);

	reverse(arr, n);
	printf("Reversed array:\n");
	print(arr, n);	
		
	return 0;
}
