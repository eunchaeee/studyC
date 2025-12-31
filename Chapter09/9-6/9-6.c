// 9-6. 허용되지 않는 포인터의 대입

#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%lf\n", *pd);

	return 0;
}