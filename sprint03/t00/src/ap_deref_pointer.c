#include "../inc/ap_deref_pointer.h"

void ap_deref_pointer(char ******str){
	char *****str1 = *str;
	char ****str2=*str1;
	char ***str3=*str2;
	char **str4=*str3;
	*str4="Follow the white rabbit";
}

