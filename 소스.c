#include <stdio.h>
#define TAX_RATE 0.2

int main(void)
{
	//sym_const.c
	const int MONTH = 12;
	int m_salary, y_salary;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &m_salary);

	y_salary = MONTH * m_salary;
	printf("������ %d�Դϴ�.", y_salary);
	printf("������ %f�Դϴ�.", y_salary*TAX_RATE);

	//����
	int x = 3;
	int y = -3;

	printf("x = %08X\n", x);
	printf("y = %08X\n", y);
	printf("x+y = %08X\n", x+y);


	//A/B
	int A = 1;
	int B = 3;
	float div;

	div = A / B;

	printf("%f", div); //�� ��,,,



	return 0;
}