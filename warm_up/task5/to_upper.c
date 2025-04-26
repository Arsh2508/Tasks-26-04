#include <stdio.h>

void to_upper(char* s, const int n){

	for(int i = 0; i < n; ++i){
		if(s[i] >= 97){
			s[i] = s[i] & 95;
		}
	}

}
