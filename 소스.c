#include <stdio.h>

int calculator(int num1, char cal, int num2);

int main(void)
{
	//����2
	int number;

	printf("1���� 100���� ������ �Է��ϼ���: ");
	scanf_s("%d", &number);

	if ((number >= 1) && (number <= 100))
	{
		if (number % 5 == 0)
			printf("%d��(��) 5�� ����Դϴ�.\n", number);
		else
			printf("%d��(��) 5�� ����� �ƴմϴ�.\n", number);
	};


	//����3
	int num1, num2;
	char cal;
	int result;

	printf("������� �Է����ּ���. (����: 2+3)\n");
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
		printf("������� ã�� �� �����ϴ�.\n");
		break;
	}

return result;
}
		

