#include "../inc/ap_isdigit.h"

bool ap_isdigit(int c){
	if(c>=0&&c<128)
		return c>47&&c<58 ? true : false;
	return false;
}

