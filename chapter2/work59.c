#include<stdio.h>
#include<stdint.h>
int main()
{
	uint32_t a=0x89ABCDEF;
	uint32_t b=0x76543210;
	char *p1=(char *)&a;
	char *p2=(char *)&b;
    p2[0]=p1[0];
	for(int i=0;i<sizeof(uint32_t);i++){
		printf("%.2x ",p2[i]);
	}
}
