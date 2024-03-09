#include<stdio.h>
#include<stdint.h>
int main()
{
	uint32_t a=0x89ABCDEF;
	uint32_t b=0x76543210;
	uint32_t mask=0xFFFFFF00;
	uint32_t answer=((b&mask)|(a&~mask));
	printf("%x",answer);
	
}
