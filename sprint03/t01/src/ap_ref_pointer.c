#include "../inc/ap_ref_pointer.h"

void ap_ref_pointer(int i, int ******ptr){
	int *****ptr1=*ptr;
	int ****ptr2=*ptr1;
	int ***ptr3=*ptr2;
	int **ptr4=*ptr3;
	*ptr4=&i;
}

