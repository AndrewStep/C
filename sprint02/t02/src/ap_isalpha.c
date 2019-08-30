#include "../inc/ap_isalpha.h"

bool ap_isalpha(int c){
	if(c>=0&&c<128)
		return ((c>64&&c<91)||(c>96&&c<123))?true:false;
	return false;
}

