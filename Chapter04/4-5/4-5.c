// 4-5. 관계 연산자의 결괏값 확인

#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10;
	int res;

	res = (a > b);
	printf("10 > 20 : %d\n", res);
	res = (a >= b);
	printf("10 >= 20 : %d\n", res);
	res = (a < b);
	printf("10 < 20 : %d\n", res);
	res = (a <= b);
	printf("10 <= 20 : %d\n", res);
	res = (a <= c);
	printf("10 <= 10 : %d\n", res);
	res = (a == b);
	printf("10 == 20 : %d\n", res);
	res = (a != c);
	printf("10 != 10 : %d\n", res);

	return 0;
}