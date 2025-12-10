#include <stdio.h>

int main(void)
{
	int a;
	int b, c, d;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	d = b + 5;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 : %d\n", a);			// 10
	printf("변수 b의 값 : %d\n", b);			// 10
	printf("변수 c의 값 : %d\n", c);			// 30
	printf("변수 d의 값 : %d\n", d);			// 15
	printf("변수 da의 값 : %.1lf\n", da);	// 3.5
	printf("변수 ch의 값 : %c\n", ch);		// A

	a = 40;

	printf("변수 a의 값 : %d\n", a);			// 40
	printf("변수 b의 값 : %d\n", b);			// 10 (값복사*****)
	printf("변수 c의 값 : %d\n", c);			// 30
	printf("변수 d의 값 : %d\n", d);			// 15

	return 0;
}