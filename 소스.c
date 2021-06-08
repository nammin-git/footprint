#include <stdio.h>

//숫자의 개수
void main()
{
	int a, b, c;
	unsigned int result, divisor;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	result = a * b * c;
	divisor = 1000000000;

	printf("%d\n", result);

	int num[10] = { 0 };

	while (result/divisor!=0) {
		divisor /= 10;
	}

	while (result > 10) {
		num[result / divisor]++;
		result %= divisor;
		divisor /= 10;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", num[i]);


}