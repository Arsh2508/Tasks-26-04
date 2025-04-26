#include <stdio.h>

void read_arr(int*, const int);
_Bool compare(int *, int *, const int);
int main()
{
	const int n = 5;
	
	int arr1[n];
	int arr2[n];
	
	printf("Enter firs arra's elements\n");
	read_arr(arr1, n);
	printf("Enter second array's elements\n");
	read_arr(arr2, n);
	
	if(compare(arr1, arr2, n)){
		printf("Arrays are equeal:\n");
	}
	else{
		printf("Arrays are not equal:\n");
	}
	
	return 0;

}
