#include<stdio.h>
#include<assert.h>
int int_size_is_32(){
	int x=-1;
	return !(int)((unsigned)x+1);
}
/*版本2
 *int int_size_is_32(){
	int set_msb=1<<31;
	int beyong_msb=set_msb<<1;这一步就是避免移位长度大于等于左值宽度
 }
 * */
int main(int argc, char *argv[]) {
  assert(int_size_is_32());
  return 0;
}
