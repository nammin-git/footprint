#include <stdio.h>

int main(void)
{
	//������ ���� k �� ����ϱ�
	int k;
	k = 15;
	printf("%d\n", k);


	//A+B
	int A;
	int B;
	int sum;

	A = 1;
	B = 2;
	sum = A + B;

	printf("%d\n", sum);


	//A-B
	int A;
	int B;
	int result;
	//���� ���� �̸� ���� ���񿡰� ����

	A = 3;
	B = 2;
	result = A - B;

	printf("%d\n", result);


	//AxB
	int A;
	int B;
	int result;

	A = 1;
	B = 2;
	result = A * B;

	printf("%d\n", result);

	int A;
	int B;
	int result;

	A = 3;
	B = 4;
	result = A * B;

	printf("%d\n", result);


	//A/B
	int A;
	int B;
	double result;

	A = 1;
	B = 3;
	result = A / B;

	printf("%f", result);
	//�Ҽ����� �� ���Ϳ�


	//��Ģ����
	int A;
	int B;
	int sum, subtraction, mutiply, devision, mod;

	A = 7;
	B = 3;
	sum = A + B;
	subtraction = A - B;
	mutiply = A * B;
	devision = A / B;
	mod = A % B;

	printf("%d\n%d\n%d\nd\n%d\n", sum, subtraction, mutiply, devision, mod);

	return 0;
}