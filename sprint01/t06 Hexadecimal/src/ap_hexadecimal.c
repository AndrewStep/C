#include "../inc/hexadecimal.h"

void ap_hexadecimal (void){
	for(int i=48;i<71;i++){
		if(i>57&&i<65)
			continue;
		ap_printchar((char)i);
		ap_printchar('\n');
	}
}

