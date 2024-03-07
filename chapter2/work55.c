#include<stdio.h>
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++)
	printf(" %.2x", start[i]);    //line:data:show_bytes_printf
    printf("\n");
}

void show_short(short x) {
    show_bytes((byte_pointer) &x, sizeof(short)); }

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int)); //line:data:show_bytes_amp1
}

void show_long(long x) {
    show_bytes((byte_pointer) &x, sizeof(long)); //line:data:show_bytes_amp1
}
void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float)); //line:data:show_bytes_amp2
}

void show_double(double x) {
    show_bytes((byte_pointer) &x, sizeof(double)); }

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *)); //line:data:show_bytes_amp3
}
/* $end show-bytes */


/* $begin test-show-bytes */
void test_show_bytes(int val) {
    int ival = val;
    float fval = (float) ival;
	short sval=(short)val;
	long lval=(long)val;
	double dval=(double)val;
    int *pval = &ival;
    show_int(ival);
    show_short(sval);
    show_long(lval);
    show_double(dval);
    show_float(fval);
    show_pointer(pval);
}
/* $end test-show-bytes */
int main()
{
	test_show_bytes(12345);
}
