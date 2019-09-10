#include "../inc/ap_printint.h"

void ap_printchar(char c){
	_write(1, &c, 1);
}

