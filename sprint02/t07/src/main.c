#include "../inc/ap_tolower.h"

int main(){
	int s=ap_tolower('~');
	_write(1, &s, 4);
	return 0;
}

