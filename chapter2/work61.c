#include<stdio.h>
#include<assert.h>

int A(int x){
	return !~x;
}
int B(int x){
	return !x;
}
int C(int x){
	return A(x|~0xff);
}
int D(int x){
	return B(x>>((sizeof(int)-1)<<3)&0xff);
}
 int main()
{
	int x1=0x1234ff;
	int x2=0x1234;
	assert(A(x1));
	assert(D(x1));

}
