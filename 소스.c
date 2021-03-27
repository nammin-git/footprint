#include <stdio.h>

int main(void)
{
	//정수형 변수 k 값 출력하기
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
	//뺴기 변수 이름 짓기 오비에게 헬프

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
	//소수점이 안 나와옴


	//사칙연산
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