#include "../inc/ap_isspace.h"

bool ap_isspace(char c){
	if (c>=0 &&c<128)
		return (c==32 || (c>8&&c<14))? true : false;
	return false;
}

