#include<stdio.h>
#include<assert.h>

unsigned srl(unsigned x,int k){
	unsigned xsra=(int)x>>k;
	int size=sizeof(int)<<3;
	return ~(~0<<(size-k))&xsra;
}

unsigned sra(int x,int k){
	int xsrl=(unsigned)x>>k;
	int size=sizeof(int)<<3;
	int sign=1<<size-1;
	unsigned mask=(int)-1<<(size-k);
	mask&=!(sign&x)-1;
	return mask|xsrl;
}
int main(int argc, char* argv[]) {
  unsigned test_unsigned = 0x12345678;
  int test_int = 0x12345678;

  assert(srl(test_unsigned, 4) == test_unsigned >> 4);
  assert(sra(test_int, 4) == test_int >> 4);

  test_unsigned = 0x87654321;
	test_int = 0x87654321;

	assert (srl (test_unsigned, 4) == test_unsigned >> 4);
	assert (sra (test_int, 4) == test_int >> 4);

  return 0;
}
