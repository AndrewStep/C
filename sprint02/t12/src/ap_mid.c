#include "../inc/ap_mid.h"

int ap_mid(int a, int b, int c){
	if((a>=b && b>=c) || (a<=b && b<=c))
		return b;
	if((b>=a && a>=c) || (b<=a && a<=c))
		return a;
	if((a>=c && c>=b) || (a<=c &&c<=b))
		return c;
	return -1;
}

