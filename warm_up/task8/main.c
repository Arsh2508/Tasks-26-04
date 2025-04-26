#include <stdio.h>

void read_arr(int*, const int);
void print(int *, int*, const int, const int);
int main()
{
	const int n = 4;
	const int m = 6;	

	int arr1[n];
	int arr2[m];
	
	printf("Enter %d elements of firs array\n", n);
	read_arr(arr1, n);
	printf("Enter %d elements of second array\n", m);
	read_arr(arr2, m);
	
	print(arr1, arr2, n, m);
	return 0;

}
