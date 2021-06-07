#include <stdio.h>

//숫자의 개수
void main()
{
	int a, b, c;
	printf("자연수를 입력하시오: ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	
	printf("\n-----------------\n\n");

	int num[10] = { 0 };
	unsigned long result;
	result = a * b * c;
	unsigned long divisor = 100000000;
	
	while (result<10) {
		if (result / divisor == 0)
			divisor /= 10;
		else {
			num[result / divisor + 1] = result / divisor;
			result = result % divisor;
			divisor /= 10;
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", num[i]);
	}

}