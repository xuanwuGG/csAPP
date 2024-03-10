#include<stdio.h>

int int_shift_are_arithmetic(){
	int x=1;
	return !(x>>((sizeof(int)<<3)-1));
}
int main(){
	printf("%d\n",int_shift_are_arithmetic());
}
