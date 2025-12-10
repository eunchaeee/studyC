#include <stdio.h>

int main(void)
{
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c은 %s입니다.\n", '1', "first");
	
	float a = 0.1f;
	float b = 0.1f;
	printf("%.14lf\n", a + b);
	return 0;
}