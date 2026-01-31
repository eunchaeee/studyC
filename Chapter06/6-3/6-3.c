// 6-3. do ~ while문을 사용한 반복문
#include <stdio.h>

int main(void)
{
	int a = 1;

	do
	{
		a = a * 2;
	} while (a < 10);
	printf("a = %d\n", a);

	return 0;
}