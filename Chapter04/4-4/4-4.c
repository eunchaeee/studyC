// 4-4. 전위 표기와 후위 표기를 사용한 증감 연산
#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("증감 연산 후 초깃값 a = %d, b = %d\n", a, b);
	printf("전위형 (++a) * 3 = %d, 후위형: (b++) * 3 = 15", pre, post);

	return 0;
}