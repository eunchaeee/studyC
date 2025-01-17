#include <stdio.h>

int main(void)
{
	printf("%d\n", 10);			// %d 위치에 10 출력
	printf("%lf\n", 3.4);	    // %lf 위치에 3.4를 소숫점 여섯째 자리까지 출력
	printf("%.1lf\n", 3.45);	// 소수점 첫째자리까지 출력(둘째 자리에서 반올림)
	printf("%.10f\n", 3.4);		// 소수점 10째자리까지 출력

	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
}