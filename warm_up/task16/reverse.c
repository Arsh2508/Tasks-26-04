#include <stdio.h>

void reverse(char *ar, const int n){
	for(int i = 0; i < n/2; ++i){
		ar[i] ^= ar[n - i - 1];
		ar[n - i - 1] ^= ar[i];
		ar[i] ^= ar[n - i - 1];
	}
}
