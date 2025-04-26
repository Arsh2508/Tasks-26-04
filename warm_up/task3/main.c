#include <stdio.h>

void find(int *, int, const int);
void read_arr(int*, const int);
int main()
{	
	const int n = 7;
	int arr[n];
	read_arr(arr, n);

	int num = 0;
	printf("Enter a number to find: ");
	scanf("%d", &num);
	
	find(arr, num, n);
	return 0;
}
