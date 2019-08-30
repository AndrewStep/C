#include "../inc/ap_islower.h"

bool ap_islower(int c){
	if(c>=0&&c<128)
		return (c>96&&c<123) ? true : false;
	return false;
}
