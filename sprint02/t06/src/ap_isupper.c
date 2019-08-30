#include "../inc/ap_isupper.h"

bool ap_isupper(int c){
	if(c>=0&&c<128)
		return c>64 && c<91? true : false;
	return false;
}

