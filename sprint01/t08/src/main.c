#include "../inc/ap_strlen.h"

int main(){
	char s[]="Hello world";
	int l=ap_strlen(s);
	//int l=ap_strlen(NULL);
	printf("%d", l);
	return 0;
}

