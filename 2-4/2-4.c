#include <stdio.h>

int main(void)
{
	printf("%d\n", 10);			//10
	printf("%lf\n", 3.4);		//3.400000
	printf("%.1f\n", 3.45);		//3.5
	printf("%.10lf\n", 3.4);	//3.4000000000

	printf("%d과 %d의 합은 %d입니다. \n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	printf("크리스마스는 %d월 %d일 입니다.\n", 12, 25);
	printf("소수 표현 %.2lf", 3.141592);
	return 0;
}