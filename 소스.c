//å
//10�� �迭
#include <stdio.h>

//�Է¹��� ������ �������� ����ϱ�

void main()
{
	//�Է¹޾Ƽ� �迭�� ����
	int arr[5] = { 0 };
	
	for (int i = 0; i < 5; i++) {
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &arr[i]);
	}

	//�������� ���
	for (int i = 5; i > 0; i--) {
		printf("%d\n", arr[i - 1]);
	}
}


//����׷����� �� ��Ÿ����
#define STUDENTS 5

void main(void)
{
	int grade[STUDENTS] = { 30,20,10,40,50 };

	for (int i = 0; i < STUDENTS; i++) {
		printf("��ȣ %d: ", i);
		for (int s = 0; s < grade[i]; s++) {
			printf("*");
		}
		printf("\n");
	}


}


//�ֻ����� ���� ���� �� ����
#include <stdlib.h>
#include <time.h>
#define SIZE 6

void main()
{
	int dice[SIZE] = { 0 };
	int d_face;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10000; i++) {
		d_face = rand() % SIZE + 1;
		dice[d_face - 1]++;
	}

	printf("====================\n");
	printf("��		��\n");
	printf("====================\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d		%d\n", i + 1, dice[i]);
	}
}


//tic-tac-toc ����

void main()
{

}
