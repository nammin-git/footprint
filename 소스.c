#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	//�ݺ��� ���� 3
	//���̿� ���� ������ �����ϱ�
	int age;
	int elderly = 0, adult = 0, teenager = 0, kid = 0;

	do {
		printf("���� �������� ���̸� �Է����ּ���(0 �Է� �� ����): ");
		scanf_s("%d", &age);
		if ((age >= 1) && (age <= 12))
			kid++;
		else if ((age >= 13) && (age <= 19))
			teenager++;
		else if ((age >= 20) && (age <= 64))
			adult++;
		else if (age >= 65)
			elderly++;
	} while (age != 0);


	//do...while
	int i = 10;
	do {
		printf("i = %d\n", i);
		i++;
	} while (i < 3);


	//do...while�� �̿��� �޴�
	int i = 0;

	do {
		printf("1---���θ����\n");
		printf("2---���Ͽ���\n");
		printf("3---���ϴݱ�\n\n");
		printf("�ϳ��� �����Ͻÿ�: ");
		scanf_s("%d", &i);
	} while (i < 1 || i>3);

	printf("\n\n");

	switch (i) {
	case 1:
		printf("1�� �����ϼ̽��ϴ�.\n���θ���⸦ �����մϴ�.\n");
		break;
	case 2:
		printf("2�� �����ϼ̽��ϴ�.\n���Ͽ��⸦ �����մϴ�.\n");
		break;
	case 3:
		printf("3�� �����ϼ̽��ϴ�.\n���ϴݱ⸦ �����մϴ�.\n");
		break;
	}


	//���� ���� ����
	int answer = 59;
	int guess;
	int tries = 0;

	do {
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf_s("%d", &guess);
		tries++;

		if (guess > answer)
			printf("������ ������ �����ϴ�.\n");
		if (guess < answer)
			printf("������ ������ �����ϴ�.\n");
	} while (guess != answer);

	printf("�����մϴ�. �����Դϴ�.\n�õ�Ƚ�� %d��\n", tries);



}