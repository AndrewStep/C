#include "../inc/ap_is_positive.h"

void ap_printstr(const char *str){
	for(int i=0; i<ap_strlen(str); i++){
		_write(1, &str[i], 1);
	}
}

