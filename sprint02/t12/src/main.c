#include "../inc/ap_mid.h"

int main(){
	//range -~ ... 0 ... +~
	printf("%d\n", ap_mid(-10, -16, -15));
	printf("%d\n", ap_mid(5, 16, 10));
	printf("%d\n", ap_mid(5, 6, 6));
	//only for range 0...9 
	//int mid=ap_mid(1, 2, 3);
	//char buf=(char)(mid+'0');
	//_write(1, &buf, 1);
	return 0;
}
