#include<stdio.h>
#include<assert.h>
unsigned rotate_left(unsigned x,int n){
	unsigned mask=(unsigned)-1>>n;
	unsigned part1=mask&x;
	part1=part1<<n;
	return part1|(x>>((sizeof(int)<<3)-n));//此步在n=0会错
										   //官方版本: x>>sizeof(int)<<3-n-1>>1	
}
int main(int argc, char* argv[]) {
  assert(rotate_left(0x12345678, 4) == 0x23456781);
  assert(rotate_left(0x12345678, 20) == 0x67812345);
  return 0;
}
