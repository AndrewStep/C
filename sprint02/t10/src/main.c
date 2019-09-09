#include "../inc/ap_multiple_number.h"

int main(){
	if(ap_multiple_number(3, 9)){
		_write(1, "True", 4);
	}
	else{
		_write(1, "False", 5);
	}
	return 0;
}

