#include <stdio.h>
#include <limits.h>

void main(void)
{
	//5���� �Է°��� ���ϴ� �Լ�
	int n;
	int result = 0;
	int i = 1;

	while (i <= 5)
	{
		printf("���� �Է��Ͻÿ�: ");
		scanf_s("%d", &n);
		result += n;
		i++;
	}

	printf("�հ�� %d�Դϴ�.\n", result);


	//��Ƽ���� ����Ͽ� ������ ����� ���ϴ� ���α׷�
	int scr = 0, cnt = 0;
	float sum = 0, avg;

	printf("�����Ϸ��� ������ �Է��Ͻÿ�.\n");

	while (scr >= 0)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &scr);

		sum += scr;
		cnt++;
	}

	sum = sum - scr;
	cnt--;

	avg = sum / cnt;
	printf("%d���� �л��� ������ ��հ��� %f�Դϴ�.\n", cnt, avg);


	//while���� ����Ͽ� �ּҰ� ã�� ���α׷�
	int n, min_value = INT_MAX;

	printf("������ �Է��Ͻÿ�.\n����� Ctrl+z\n");

	while ((scanf_s("%d", &n)) != EOF)
	{
		if (n < min_value)
			min_value = n;
	}

	printf("�ּҰ��� %d�Դϴ�.\n", min_value);


	//�ִ����� ã��
	int num1, num2, x, y, r;

	printf("�� ���� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &num1, &num2);

	(num1 > num2) ? ((x = num1) && (y = num2)) : ((x = num2) && (y = num1));

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("%d�� %d�� �ִ������� %d�Դϴ�.\n", num1, num2, x);
}