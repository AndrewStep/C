#include "../inc/ap_printint.h"

void ap_printint(int n){
	char sign_char=0;
	if(n<0){
		sign_char='-';
		n=-n;
	}
	char buf[11];
	char *ptr=&buf[10];
	char digits[]="0123456789";
	while(n>0){
		*ptr--=digits[(n%10)];
		n/=10;
	}
	if(sign_char){
		*ptr--=sign_char;
	}
	while(++ptr != &buf[11]){
		ap_printchar(*ptr);
	}
	ap_printchar('\n');
}

