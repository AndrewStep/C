#include "../inc/ap_isupper.h"

int main(){
	if(ap_isupper('Z'))
		_write(1, "1", 1);
	else
		_write(1, "0", 1);
	return 0;
}

