#include "../inc/ap_max.h"

int ap_max(int a, int b, int c){
	if(a>=b&&a>=c)
		return a;
	else if(b>=a&&b>=c)
		return b;
	else if(c>=a&&c>=b)
		return c;
	return -1;
}

