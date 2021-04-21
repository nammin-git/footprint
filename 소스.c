#include <stdio.h>

int calculator(int num1, char cal, int num2);

int main(void)
{
	//문제2
	int number;

	printf("1부터 100까지 정수를 입력하세요: ");
	scanf_s("%d", &number);

	if ((number >= 1) && (number <= 100))
	{
		if (number % 5 == 0)
			printf("%d은(는) 5의 배수입니다.\n", number);
		else
			printf("%d은(는) 5의 배수가 아닙니다.\n", number);
	};


	//문제3
	int num1, num2;
	char cal;
	int result;

	printf("연산시을 입력해주세요. (예시: 2+3)\n");
	scanf_s("%d%c%d\n", &num1, &cal, &num2);

	result = calculator(num1, cal, num2);

	return 0;
}

int calculator(int num1, char cal, int num2)
{
	int result;

	switch (cal)
	{
	case '+':
		result = num1 + num2;
		printf("%d%c%d = %d\n", num1, cal, num2, result);
		break;
	case '-':
		result = num1 - num2;
		printf("%d%c%d = %d\n", num1, cal, num2, result);
		break;
	case '*':
		result = num1 * num2;
		printf("%d%c%d = %d\n", num1, cal, num2, result);
		break;
	case '/':
		result = num1 / num2;
		printf("%d%c%d = %d\n", num1, cal, num2, result);
		break;
	default:
		printf("연산식을 찾을 수 없습니다.\n");
		break;
	}

return result;
}
		

