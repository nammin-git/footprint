#include <stdio.h>

//2���� ǥ�� �迭�� �ۼ��ϱ�
#define ROWS 3
#define COLS 5

void main()
{
	//�迭 �ʱ�ȭ
	int array[ROWS][COLS] = {
		{12,56,32,16,98},
		{99,56,34,41,3},
		{65,3,87,78,21}
	};
	
	//�迭 ���
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%3d ", array[i][j]);
		}
		printf("\n");
	}

	printf("=============\n");

	//���� �հ�
	int sum = 0;

	for (int i = 0; i < ROWS; i++) {
		for (int col = 0; col < COLS; col++) {
			sum += array[i][col];
		}
		printf("%d���� �հ�= %d\n", i, sum);
		sum = 0;
	}

	printf("=============\n");

	//���� �հ�
	for (int j = 0; j < COLS; j++) {
		for (int row = 0; row < ROWS; row++) {
			sum += array[row][j];
		}
		printf("%d���� �հ�= %d\n", j, sum);
		sum = 0;
	}

}
