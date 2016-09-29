#include <stdio.h>
typedef struct point{
    int *ptr1;
    int data;
}T,*Ta;
typedef struct _SECURITY_ATTRIBUTES {
  T test;
  int  nLength;
  int  *ptr;
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES, *LPSECURITY_ATTRIBUTES;

int main(void) {
	int k=10;
	// your code goes here
	SECURITY_ATTRIBUTES a;
	PSECURITY_ATTRIBUTES b = &a;
	a.test.ptr1=&k;
	Ta y=&(a.test);
	printf("%d %d\n",*(a.test.ptr1),*(y->ptr1));
//	a->test->ptr1=&k;
//	printf("%d\n",a.test->ptr1);
//	printf("%d\n",*(b->test->ptr1));
	return 0;
}

