// 6-2. for문을 사용한 반복문

#include <stdio.h>

int main(void)
{
	int a = 1;
	int i;

	for (i = 0; i < 3; i++)
	{
		a = a * 2;
	}

	printf("a = %d\n", a);

	return 0;
}