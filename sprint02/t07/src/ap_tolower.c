#include "../inc/ap_tolower.h"

int ap_tolower(int c){
	if((c>64&&c<91)||(c>96&&c<123))
		return (c>96&&c<123)? c : c+32;
	return 48;
}

