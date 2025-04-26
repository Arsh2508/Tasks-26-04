#include <stdio.h>

void find(int * arr, int target, const int n){
	for(int i = 0; i < n; ++i){
		if(arr[i] == target){
			printf("YES\n");
			return;
		}
	}
	printf("NO\n");
}
