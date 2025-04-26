#include <stdio.h>

int reverse(int n){
	int res = 0;
	
	while(n){
		res *=10;
		res += (n % 10);
		n /= 10;
	}
	return res;
}
