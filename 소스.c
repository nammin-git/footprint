#include <stdio.h>

//1���� 10���� �������� �������� ����ϴ� ���α׷�
#define SIZE 10

void power(int a[][10]);

void main()
{
	int a[3][SIZE] = { 0 };

	//ù° ���� ����
	for (int i = 0; i < SIZE; i++) {
		a[0][i] = i + 1;
		printf("%4d ", a[0][i]);
	}
	printf("\n");

	power(a);

	//�ι�° ���� ������
	for (int i = 0; i < SIZE; i++) {
		printf("%4d ", a[1][i]);
	}
	printf("\n");

	//����° ���� ��������
	for (int i = 0; i < SIZE; i++) {
		printf("%4d ", a[2][i]);
	}
	printf("\n");


	//�������� �Է¹ޱ�
	int num;

	printf("------------------\n");
	printf("���������� ã�Ƶ帳�ϴ�.\n");
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	for (int i = 0; i < SIZE; i++) {
		if (a[2][i] == num) {
			printf("%d�� ���������� %d", num, a[0][i]);
			break;
		}
		else if(a[2][i])
	}

}


void power(int a[][10]) {
	for (int j = 0; j < SIZE; j++) {
		a[1][j] = a[0][j] * a[0][j];
		a[2][j] = a[0][j] * a[0][j] * a[0][j];
	}
}

