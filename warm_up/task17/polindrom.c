#include <stdio.h>

int reverse(int);

int polindrom(int n){
	int count = 0;
	while(n != reverse(n)){
		n += reverse(n);
		++count;
		
	}
	return count;
}
