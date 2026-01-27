// 6-1. while 문을 사용한 반복문
#include <stdio.h>

int main(void)
{
	int a = 1;

	while (a < 10)
	{
		a = a * 2;
	}

	printf("a : %d\n", a);

	return 0;
}