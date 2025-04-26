#include <stdio.h>

float average(int *, const int n);
void read_arr(int*, const int);
int main()
{
	const int n = 5;
	
	int arr[n];	
	printf("Enter arra's elements\n");
	read_arr(arr, n);
	
	printf("Average is %.2f\n", average(arr, n));
	
	return 0;

}
