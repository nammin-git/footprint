#include <stdio.h>
#define SEED_MONEY 1000000

void main(void)
{
	//�ݺ��� �̿��� ���丮�� ���ϱ� 1
	int n, i;
	long fact=1;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
		fact *= i;
	
	printf("%d!�� %d�Դϴ�.\n", n, fact);


	//�ݺ��� �̿��� ���丮�� ���ϱ� 2
	int n, i = 1;
	long fact = 1;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	while (i <= n)
	{
		fact *= i;
		i++;
	}
	
	printf("%d!�� %d�Դϴ�.\n", n, fact);


	//�߰�����
	int i;
	for (i = 1; i < 5; i++)
		printf("%d ", 2 * i);
	for (i = 10; i > 0; i = i - 2)
		printf("Student%d\n", i);


	//��ø for���� �̿��Ͽ� *��ȣ�� �簢�� ������� ����ϴ� ���α׷� 1
	int x, y;

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 10; x++)
			printf("*");

		printf("\n");
	}


	//��ø for���� �̿��Ͽ� �� ���� *��ȣ�� ��Ÿ���� ���α׷� 2
	int x, y, n = 1;
	
	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < n; x++)
			printf("*");
			
		n++;
		printf("\n");
	}
	
	//�� �����ϰ� n�� �߰����� �ʴ� ���
	int x, y;

	for (y = 1; y <= 5; y++) {
		for (x = 0; x < y; x++)
			printf("*");
		printf("\n");		
	}


	//��ø for���� �̿��Ͽ� ���� �ﰢ�� ã��
	int a, b, c;

	for (a = 1; a < 100; a++) {
		for (b = 1; b < 100; b++){
			for (c = 1; c < 100; c++){
				if (a * a + b * b == c * c)
					printf("%d %d %d\n", a, b, c);
			}
		}
	}

	//�ֻ��� 2���� ������ �� ���� 6�� �Ǵ� ����� ��
	int dice1, dice2;

	for (dice1 = 1; dice1 <= 6; dice1++) {
		for (dice2 = 1; dice2 < 6; dice2++) {
			if (dice1 + dice2 == 6)
				printf("(%d %d)\n", dice1, dice2);
		}
	}

	//�ֻ��� 3���� ������ �� ���� 10�� �Ǵ� ����� ��
	int dice1, dice2, dice3;

	for (dice1 = 1; dice1 <= 6; dice1++) {
		for (dice2 = 1; dice2 <= 6; dice2++) {
			for (dice3 = 1; dice3 <= 6; dice3++) {
				if (dice1 + dice2 + dice3 == 10)
					printf("(%d %d %d)\n", dice1, dice2, dice3);
			}
		}
	}
	
	//��ø for���� �̿��� ���ϱ�
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ���ϱ� %d�� %d\n", i, j, i * j);
	}

	//�� �� ���� ������ 10�谡 �Ǵ��� ����ϴ� ���α׷�
	int year;
	double money;
	money = SEED_MONEY;
	
	for (year = 0; ; year++) {
		money += money * 0.3;
		if (money > SEED_MONEY * 10)
			break;
	}
	//�̰� �� ��

	year = 0;
	while (1) {
		year++;
		money += money * 0.30;
		if (money > SEED_MONEY * 10)
			break;
	}

	printf("%d�� �ĸ� ������ 10�谡 �˴ϴ�.\n", year);


}