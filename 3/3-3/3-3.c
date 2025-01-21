/* 여러가지 정수형 변수 */

#include <stdio.h>

int main(void)
{
    short sh =  32767;  // short형의 최대값 초기화 : 2의 15제곱 - 1
    int in = 2147483647; // int형의 최대값 초기화 : 2의 31제곱 - 1
    long ln = 2147483647; // long형의 최대값 초기화
    long long lln = 123451234512345;  // 아주 큰 값 초기화

    printf("short형 변수 출력 : %d\n", sh);
    printf("int형 변수 출력 : %d\n", in);
    printf("long형 변수 출력 : %ld\n", ln);
    printf("longlong형 변수 출력 : %lld\n", lln);

    return 0;
}