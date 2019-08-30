#include "../inc/write_knock.h"

void ap_write_knock_knock(void){
	char str [] = "Follow the white rabbit.\nKnock, knock, Andrew.";
	_write(1, str, strlen(str));
}

