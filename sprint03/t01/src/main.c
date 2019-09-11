#include "../inc/ap_ref_pointer.h"

int main(){
	int i=10;
	int *ptr=NULL;
	int **pptr=&ptr;
	int ***ppptr=&pptr;
	int ****pppptr=&ppptr;
	int *****ppppptr=&pppptr;
	ap_ref_pointer(i, &ppppptr);
	printf("%d", *ptr);
	return 0;
}

