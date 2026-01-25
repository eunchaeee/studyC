// 5-5. 중첩 if문에서 중괄호가 반드시 필요한 경우

#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	if (a < 0)
	{							// 중괄호를 생략할 수 있지만, 생략 시 11행과 16행의 if-else 구문이 서로 연결되어 의도치 않은 결과가 발생할 수 있음
		if (b > 0)
		{
			printf("1");
		}
	}
	else
	{
		printf("2");
	}

	return 0;
}