#include <stdio.h>

int main(void)
{
	int a = 30;
	int res;

	res = (a > 10) && (a < 20);
	printf("(a > 10) && (a < 20) : %d\n", res);		// 0
	res = (a < 10) || (a > 20);
	printf("(a < 10) || (a > 20) : %d\n", res);		// 1
	res = !(a >= 30);
	printf("!(a >= 30) : %d\n", res);				// 0 

	return 0;
}