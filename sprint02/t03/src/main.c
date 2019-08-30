#include "../inc/ap_isdigit.h"

int main(){
	if(ap_isdigit('~'))//'0' '1'
		_write(1, "1", 1);
	else
		_write(1, "0", 1);
	return 0;
}

