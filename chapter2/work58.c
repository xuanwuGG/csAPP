#include<stdio.h>
typedef unsigned char *bytePointer;
int is_little_endian(){
		int sam=1;
		bytePointer start=(bytePointer)&sam;
		return start[0]==1?1:0;
}

int main(){
	printf(
			"%d\n",
	is_little_endian()
			);

}
