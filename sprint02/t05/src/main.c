#include "../inc/ap_islower.h"

int main(){
	if(ap_islower('Z'))
		_write(1, "1", 1);
	else
		_write(1, "0", 1);
	return 0;
}

