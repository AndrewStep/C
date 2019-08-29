#include "../inc/ap_printstr.h"

void ap_printstr(const char *s){
	if(s!=NULL){
		for(int i=0; i<ap_strlen(s); i++){
			_write(1, &s[i], 1);
		}
	}
	else
		_write(2,"\nEmpty string",ap_strlen("\nEmpty string"));
}

