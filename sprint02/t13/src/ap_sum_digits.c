#include "../inc/ap_sum_digits.h"

int ap_sum_digits(int num){
	int temp=0;
	if(num < 0){
		num=-num;
	}
	while(num>0){
		temp+=num%10;
		num/=10;
	}
	return temp;
}

