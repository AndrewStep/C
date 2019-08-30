#include "../inc/ap_is_positive.h"

void ap_is_positive(int i){
	if(i>0)
		ap_printstr("positive\n");
	else if(i==0)
		ap_printstr("zero\n");
	else
		ap_printstr("negative\n");
}

