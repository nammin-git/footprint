#include <stdio.h>
#include <limits.h> //�� ������ �����ΰ� -> �� �ڷ����� �ִ밪�� �ּҰ��� �����ص� �������

int main(void)
{
	short s_money = SHRT_MAX; //<limits.>�� �������� ������ ������� ���� �ĺ��ڷ� ��
	unsigned short u_money = USHRT_MAX; 

	s_money = s_money + 1;
	printf("s_money = %d\n", s_money);

	u_money = u_money + 1;
	printf("u_money = %d\n", u_money);



	return 0;
}