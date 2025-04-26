#include <stdio.h>

float average(int *arr, const int n){
	float res = 0;
	for(int i = 0; i < n; ++i){
		res += arr[i];
	}
	return res/n;
}
