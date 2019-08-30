#include "../inc/ap_isspace.h"

int main(){
	if(ap_isspace(128)) 
		_write(1, "1", 1);
	else
		_write(1, "0", 1);
}

