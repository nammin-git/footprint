#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//break�� continue
void main()
{
	//1������ 30������ �ִ� ��
	//1������ 5������ ���� ��ǥ
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("������ �л��� ���� ������.\n");
			break;
		}
		printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
	}

	//7�� �л��� ���ļ� �Ἦ
	//7�� �л��� �����ϰ� 6������ 10������ ���� ��ǥ
	for (int i = 1; i <= 30; i++) {
		if (i >= 6&&i<=10) {
			if (i == 7) {
				printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
		}		
	}
}


//����
int main(void)
{
	printf("���� �ʱ�ȭ ����\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}

	srand((unsigned)time(NULL));
	printf("\n���� �ʱ�ȭ ����\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}
	return 0;
}

//���� ���� ��(0 1 2)
int main()
{
	srand((unsigned)time(NULL));

	int i = rand() % 3;

	if (i == 0) {
		printf("����\n");
	}
	else if (i == 1) {
		printf("����\n");
	}
	else if (i == 2) {
		printf("��\n");
	}
	else {
		printf("�����\n");
	}

	switch (i) {
	case 0:printf("����\n"); break;
	case 1:printf("����\n"); break;
	case 2:printf("��\n"); break;
	default: printf("�����\n"); break;
	}
}


//����ī��
int main()
{
	int age = 15;
	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("�ʵ��л��Դϴ�\n"); break;
	case 14:
	case 15:
	case 16:printf("���л��Դϴ�\n"); break;
	case 17:
	case 18:
	case 19:printf("����л��Դϴ�\n"); break;
	default: printf("�л��� �ƴѰ�����\n"); break;
	}

	return 0;
}


//Up and Down
int main()
{
	srand((unsigned)time(NULL));
	
	int answer = 1 + rand() % 100;
	int n;

	for (int chance = 0; chance < 5; chance++) {
		printf("���ڸ� �Է��Ͻÿ�: ");
		scanf_s("%d", &n);
		
		if (answer < n) {
			printf("Down ��\n");
		}
		else if (answer == n) {
			printf("You Win!\n");
			break;
		}
		else if (answer > n) {
			printf("Up ��\n");
		}
		else
			printf("�� �� ���� ������ �߻��߾��\n\n");

		if (chance == 4) {
			printf("You Lose\n");
		}

	}
	
}
