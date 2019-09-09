#include "../inc/ap_isos_triangle.h"

void ap_isos_triangle(unsigned int length, char c){
	for(size_t i=0; i<length; i++){
		for(size_t j=0; j<=i; j++){
			ap_printchar(c);
		}
		if(i!=length-1)
			ap_printchar('\n');
	}
}

