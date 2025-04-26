#include <stdio.h>

_Bool compare(int *ar1, int *ar2, const int n){
	for(int i = 0; i < n; ++i){
		if(ar1[i] != ar2[i]){
			return 0;
		}
	}
	return 1;
}
