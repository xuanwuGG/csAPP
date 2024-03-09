#include<stdio.h>

int judge(int x)
{
	char *p=(char *)&x;
	unsigned char low=p[0];
	int size=sizeof(int)<<3;
	unsigned char high=p[size-1];
	unsigned char mask1=0xFF;
	unsigned char mask2=0x00;
	return (low&mask1||high&mask2)||(high&mask1||high&mask2); 
}
 int main()
{
	int x=0;
	scanf("%x",&x);
	printf("%d\n",judge(x));
}
