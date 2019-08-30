#include "../inc/printable.h"

void ap_only_printable(){
	for(int i=126;i>32;i--){
		ap_printchar((char)i);
		ap_printchar('\n');
	}
}

