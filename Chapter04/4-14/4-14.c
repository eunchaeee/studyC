// 4-14. 연산자 우선순위와 연산 방향
#include <stdio.h>

int main(void) 
{
	int a = 10, b = 5;
	int res;

	res = a / b * 2; // Division and multiplication have the same precedence and are evaluated left to right
	printf("res = %d\n", res); // Output: res = 4

	res = ++a * 3; // Pre-increment has higher precedence than multiplication
	printf("res = %d\n", res); // Output: res = 33

	res = a > b && a != 5; // Relational operators have higher precedence than logical AND
	printf("res = %d\n", res); // Output: res = 1 (true)

	res = a % 3 == 0; // Modulus has higher precedence than equality
	printf("res = %d\n", res); // Output: res = 0 (false)

	return 0;
}