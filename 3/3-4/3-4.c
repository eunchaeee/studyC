/* unsigned를 잘못 사용한 경우 */

#include <stdio.h>

int main(void)
{
    unsigned int a;


    a = 4294967295;  // 2의 32승 = 	4,294,967,296
    printf("%d\n", a);  // d로 출력
    a = -1;
    printf("%u\n", a); // u로 출력

    return 0;
}