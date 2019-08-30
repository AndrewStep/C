#include "../inc/ap_is_odd.h"

int main(){
	if(ap_is_odd(30))
		_write(1, "true", 4);
	else
		_write(1, "false", 5);
}

