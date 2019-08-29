#include "../inc/ap_printstr.h"

int ap_strlen(const char *s){
	if(s!=NULL){
		int i=0;
		while(s[i]!='\0'){
			i++;
		}
		return i;
	}
	return 0;
}

