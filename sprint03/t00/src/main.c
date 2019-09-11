#include "../inc/ap_deref_pointer.h"

int main(){
	char *str1=NULL;
	char **str2=&str1;
	char ***str3=&str2;
	char ****str4=&str3;
	char *****str=&str4;
	ap_deref_pointer(&str);
	printf("%s\n", str1);
	return 0;
}

