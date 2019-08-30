#include "../inc/ap_isalpha.h"

int main(){
	if(ap_isalpha('z'))
		_write(1, "true", 4);
	else
		_write(1, "false", 5);
}

