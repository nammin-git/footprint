//�迭 ����
#include <stdio.h>

//���� 5. ���� ������ ǥ�� ����ϱ�
void main()
{
	int score[5][5] = { 0 };

	//ö���� ���� �Է¹ޱ�
	printf("ö���� ���� �Է�\n");
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &score[0][i]);
	}

	//ö���� ���� �Է¹ޱ�
	printf("ö���� ���� �Է�\n");
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &score[1][i]);
	}

	//������ ���� �Է¹ޱ�
	printf("������ ���� �Է�\n");
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &score[2][i]);
	}

	//ö���� ���� �Է¹ޱ�
	printf("ö���� ���� �Է�\n");
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &score[3][i]);
	}


	//���� ���� ����ϱ�
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			score[4][i] += score[j][i];
		}
	}

	//���� ���� ����ϱ�
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			score[i][4] += score[i][j];
		}
	}


	//���� ����ϱ�
	printf("ö�� : %d, %d, %d, %d ���� ���� : %d\n", score[0][0], score[0][1], score[0][2], score[0][3], score[0][4]);
	printf("---------------------------------------\n");
	printf("ö�� : %d, %d, %d, %d ���� ���� : %d\n", score[1][0], score[1][1], score[1][2], score[1][3], score[1][4]);
	printf("---------------------------------------\n");
	printf("���� : %d, %d, %d, %d ���� ���� : %d\n", score[2][0], score[2][1], score[2][2], score[2][3], score[2][4]);
	printf("---------------------------------------\n");
	printf("���� : %d, %d, %d, %d ���� ���� : %d\n", score[3][0], score[3][1], score[3][2], score[3][3], score[3][4]);
	printf("---------------------------------------\n");
	printf("���� : %d, %d, %d, %d �� �� : %d\n", score[4][0], score[4][1], score[4][2], score[4][3], score[4][4]);
	printf("---------------------------------------\n");

}





