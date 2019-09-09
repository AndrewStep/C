#include "../inc/ap_toupper.h"

int main(){
	int a=ap_toupper("del");
	_write(1, &a, 1);
	return 0;
}
