#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	//�ݺ��� ���� 3
	//���̿� ���� ������ �����ϱ�
	int age, i = 0;
	int elderly = 0, adult = 0, juvenile = 0, kid = 0;

	while (1) {
		printf("���� �������� ���̸� �Է����ּ��� (0 �Է� �� ����): ");
		scanf_s("%d", &age);

		if (age==0)
			break;

		if ((age >= 1) && (age <= 12))
			kid++;
		else if ((age >= 13) && (age <= 19))
			juvenile++;
		else if ((age >= 20) && (age <= 64))
			adult++;
		else if ((age >= 65))
			elderly++;

		i++;
	}

	printf("..��������..\n<�ʹ��� ���� ����>\n");
	printf("�� %d�� ���� %d��, ���� %d��, û�ҳ� %d��, �Ƶ� %d��\n", i, elderly, adult, juvenile, kid);
	printf("�ڷγ� �������� �� %d���� �Դϴ�.\n", 10*elderly+20*(juvenile+kid));


	//���� �ݺ��� ���� 1-1
	//���� ž �ױ�
	int x, y;

	for (y = 1; y <= 5; y++) {
		for (x = 1; x <= y; x++) {
			printf("*");
		}
		printf("\n");	
	}


	//���� �ݺ��� ���� 1-2
	//���� �Ųٷε� ž �ױ�
	int x, y;

	for (y = 5; y > 0; y--) {
		for (x = 5; x >= y; x--)
			printf("*");
		printf("\n");
	}
	//�� ��


	//���� �ݺ��� ���� 2-1
	//������ ��� ���ι���
	int table, n;

	for (table = 1; table <= 9; table++) {
		for (n = 1; n <= 9; n++) {
			printf("%dx%d=%d ", table, n, table * n);
		}
		printf("\n");
	}

	//���� �ݺ��� ���� 2-2
	//������ ��� ���ι���
	int table, n;
	for (n = 1; n <= 9; n++) {
		for (table = 1; table <= 9; table++)
			if (table*n<10)
				printf("%dX%d=%d  ", table, n, table * n);
			else
				printf("%dX%d=%d ", table, n, table * n);
		printf("\n");
	}


}
