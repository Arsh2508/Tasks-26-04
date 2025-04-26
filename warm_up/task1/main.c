#include <stdio.h>

void print_mul(int *, int *, const int);
void read_arr(int*, const int);
int main()
{
	const int n = 5;
	
	int arr1[n];
	int arr2[n];
	
	printf("Enter firs arra's elements\n");
	read_arr(arr1, n);
	printf("Enter second array's elements\n");
	read_arr(arr2, n);
	
	print_mul(arr1, arr2, n);
	return 0;

}
