#include <stdio.h>
#define START_DAY 6
#define DATE_OF_MONTH 31

void main(void)
{
	//�޷� �����
	int day, date;

	printf("============================\n");
	printf(" ��  ��  ȭ  ��  ��  ��  ��\n");
	printf("============================\n");

	for (day = 0; day < START_DAY; day++)
		printf("    ");

	for (date = 1; date <= DATE_OF_MONTH; date++) {
		if (day == 7) {
			day = 0;
			printf("\n");
		}
		day++;
		printf("%3d ", date);
		if (date == DATE_OF_MONTH)
			printf("\n");
	}

	printf("============================\n");


	//"Hello World"�� �� �� ��µǴ°�
	int x;
	for (x = 0; x < 10; x++) {
		if (x < 5)
			continue;
		else
			break;
		printf("Hello World!\n");
	}

	int x, y;
	for (x = 0; x < 3; x++)
		for (y = 2; y >= 0; y--)
			printf("*");

	int i = 5;
	for (; i; i--)
		printf("%d", i);


	//�ñ׸�
	int i, sum = 0, result = 0;

	for (i = 1; i <= 30; i++) {
		sum = i * i + 1;
		result += sum;
	}

	printf("%d", result);


	//1���� 100���� ��� 3�� ����� ���� ���ϴ� ���α׷�
	int n, sum = 0;

	//while ����
	n = 1;
	while (3 * n <= 100) {
		sum += 3 * n;
		n++;
	}
	printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.\n", sum);

	//for ����
	for (n = 1; 3 * n <= 100; n++) {
		sum += 3 * n;
	}
	
	printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.\n", sum);


	//�Է��� ������ ���� ����ϴ� ���α׷�
	int number, sum = 0;

	while (scanf_s("%d", &number) != EOF) {
		sum += number;
	}
	
	printf("������ ���� %d�Դϴ�.\n", sum);


	//�ݺ� ������ ����Ͽ� ���� ����ϱ�
	int x, y, z;
	
	for (y = 1; y <= 7; y++) {
		for (z = 1; z <= 7 - y; z++)
			printf(" ");
		for (x = 1; x <= y; x++)
			printf("*");
		printf("\n");
	}


	//��ø �ݸ��� ����Ͽ� ���ڷ� ž �ױ�
	int number;
	int x, y;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &number);

	printf("\n");
	
	for (y = 1; y <= number; y++) {
		for (x = 1; x <= y; x++)
			printf("%d ", x);
		printf("\n");
	}

}