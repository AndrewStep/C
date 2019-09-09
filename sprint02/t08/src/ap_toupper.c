#include "../inc/ap_toupper.h"

int ap_toupper(int c){
	if((c!=-1)&&((c>=65&&c<91)||(c>=97&&c<123))){
		return (c>96&&c<123)? c-32 : c;
		}
	return -1;
}

