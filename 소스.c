#include <stdio.h>

void main(void)
{
	//�ݺ��� ���� 3
	//���̿� ���� ������ �����ϱ�
	int age = 1;
	int sinior = 0, adult = 0, teenager = 0, junior = 0;

	while (1) {
		if (age != 0) {
			printf("���� �������� ���̸� �Է����ּ���(0 �Է½� ����): ");
			scanf_s("%d", &age);
		}
		else
			break;
		if ((age >= 1) && (age <= 12))
			junior++;
		else if ((age >= 12) && (age <= 19))
			teenager++;
		else if ((age >= 20) && (age <= 64))
			adult++;
		else if (age >= 65)
			sinior++;
	}
	
	printf("..���� ����..\n�� %d�� ���� %d��, ���� %d��, û�ҳ� %d��, �Ƶ� %d��\n", sinior+adult+teenager+junior, sinior, adult, teenager, junior);
	printf("�ڷγ� �������� �� %d���� �Դϴ�.\n", 10 * sinior + 20 * (teenager + junior));


	//���� �ݺ��� ���� 3 - 1
	//�Է¹��� ���� ������ �� ����ϱ�
	int N, x, y;

	printf("N�� �Է��Ͻÿ�: ");
	scanf_s("%d", &N);

	for (y = 0; y < N; y++) {
		for (x = 0; x <= y; x++)
			printf("*");
		printf("\n");
	}

	//���� �ݺ��� ���� 3 - 2
	//�Է¹��� ���� ������ �� ����ϱ�
	int N, x, y;

	printf("N�� �Է��Ͻÿ�: ");
	scanf_s("%d", &N);

	for (y = N; y > 0; y--) {
		for (x = 1; x <= y; x++)
			printf("*");
		printf("\n");
	}


	//���� �ݺ��� ���� 1 - 2
	//��ž �ݴ�� �ױ�
	int x, y;

	for (y = 5; y > 0; y--) {
		for (x = 1; x <= y; x++)
			printf("*");
		printf("\n");
	}


	//���� �ݺ��� ���� 4 - 1
	//�� ž ������ ����
	int x, y, z;

	for (y = 0; y < 5; y++) {
		for (z = y; 5 - z > 0; z++)
				printf(" ");
		for (x = 0; x <= y; x++)
			printf("*");
						
		printf("\n");
	}


	//���� �ݺ��� ���� 4 - 1
	//�� ž ������ ����
	int x, y, z;

	for (y = 0; y < 5; y++) {
		for (x = 0; x <= y; x++)
			printf(" ");
		for (z = y; 5 - z >0 ; z++)
			printf("*");
						
		printf("\n");
	}


	//���� �ݺ��� ���� 5
	//�� ��ȣ�� ������ ��� �����
	int x, y, z;

	for (y = 1; y <= 9; y++) {
		if (y < 5) {
			for (z = y; 5 - z > 0; z++)
				printf(" ");
			for (x = 1; x <= 2*y-1; x++)
				printf("*");
			printf("\n");
		}
		else if (y == 5) {
			for (x = 1; x <= 2 * y - 1; x++)
				printf("*");
			printf("\n");
		}
		else 
		{
			for (z = 10 - y; 5 - z > 0; z++)
				printf(" ");
			for (x = 1; x <= 19 - 2 * y; x++)
				printf("*");
			printf("\n");
		}
		//�� 19? ���������� �غ��ϱ� ���� �������� �� 19���� ��
	}

}