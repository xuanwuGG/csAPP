#include<stdio.h>
#include<assert.h>

int odd_ones(unsigned x){
	x^=x>>16;
	x^=x>>8;
	x^=x>>4;
	x^=x>>2;
	x^=x>>1;
	return x&1;
}

int main(int argc, char* argv[]) {
  assert(odd_ones(0x10101011));
  assert(!odd_ones(0x01010101));
  return 0;
}

