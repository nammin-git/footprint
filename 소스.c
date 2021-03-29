#include <stdio.h>
#include <limits.h> //이 파일은 무엇인가 -> 각 자료형의 최대값과 최소값을 정의해둔 헤더파일

int main(void)
{
	short s_money = SHRT_MAX; //<limits.>를 포함하지 않으면 선언되지 않은 식별자로 뜸
	unsigned short u_money = USHRT_MAX; 

	s_money = s_money + 1;
	printf("s_money = %d\n", s_money);

	u_money = u_money + 1;
	printf("u_money = %d\n", u_money);



	return 0;
}