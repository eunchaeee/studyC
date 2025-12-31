// 9-4. 포인터에 const 사용

#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;						// pa -> a

	printf("변수 a의 값 : %d\n", *pa);		// 포인터를 간접 참조해 a를 출력
	pa = &b;								// pa -> b
	printf("변수 b의 값 : %d\n", *pa);		// 포인터를 간접 참조해 b값 출력
	pa = &a;								// pa -> a
	a = 30;									// a를 직접 참조해 값을 바꾼다.
	printf("변수 a의 값 : %d\n", *pa);		// 포인터로 간접 참조해 바뀐 값 출력

	return 0;
}