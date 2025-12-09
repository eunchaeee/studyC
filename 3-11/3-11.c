// 3-11. 문자와 문자열 입력
#include <stdio.h>

int main(void)
{
	float grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%f", &grade);	// grade 변수에 학점 문자 입력
	printf("이름 입력 : ");
	scanf("%s", name);		// name 배열에 이름 문자열 입력, &를 사용하지 않는다.
	printf("%s의 학점은 %.2f입니다.\n", name, grade);

	return 0;
}