#include<stdio.h>

unsigned replace_byte(unsigned x,int i,unsigned char b){
char *start=(char *)&x;
start[i]=b;
return x;
}

int main()
{
	printf("%x\n",
	replace_byte(0x12345678,2,0xAB)
			);
}
