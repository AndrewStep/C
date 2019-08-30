#include "../inc/ap_is_positive.h"

int ap_strlen(const char *str){
	int i=0;
	if(str!=NULL){
		while(str[i]!='\0'){
			i++;
		}
	}
	return i;
}

