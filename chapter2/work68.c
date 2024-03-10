#include<stdio.h>
#include<assert.h>
int lower_one_mask(int n){
	unsigned x=(int)-1;
	return x>>((sizeof(int)<<3)-n);
}
int main(int argc, char* argv[]) {
  assert(lower_one_mask(6) == 0x3F);
  assert(lower_one_mask(17) == 0x1FFFF);
  assert(lower_one_mask(32) == 0xFFFFFFFF);
  return 0;
}
