#include "../inc/alphabet.h"

void ap_print_alphabet(void) {
	for (int i = 65; i < 91; i++) {
		if (i % 2 != 0)
			ap_printchar((char)i);
		else
			ap_printchar((char)(i + 32));
	}
	//ap_printchar('\n');
}

