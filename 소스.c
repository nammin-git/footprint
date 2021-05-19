#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void draw_star(int N);
void draw_star_ri(int N);

void main(void)
{
	//���� �ݺ��� ���� 3
	//*
	//**
	//***
	int N;

	printf("N�� �Է��Ͻÿ�: ");
	scanf_s("%d", &N);

	draw_star(N);
	

	//���� �ݺ��� ���� 4
	//  *
	// **
	//***
	int N;

	printf("N�� �Է��Ͻÿ�: ");
	scanf_s("%d", &N);

	draw_star_ri(N);

	
	//���� �ݺ��� ���� 5
	//������ ��� �����
	int x, y;

	for (y = 1; y <= 9; y++) {
		for (x = 1; x <= 9; x++) {			
			if ((y >= 1) && (y <= 5) && (x >= 1) && (x <= 5)) {
				if (x > 5 - y)
					printf("*");
				else
					printf(" ");
			}
			else if ((y >= 1) && (y <= 5) && (x > 5) && (x <= 9)) {
				if (x - 4 <= y)
					printf("*");
				else
					printf(" ");
			}
			else if ((y > 5) && (y <= 9) && (x >= 1) && (x <= 5)) {
				if (x + 4 >= y)
					printf("*");
				else
					printf(" ");
			}
			else if ((y > 5) && (y <= 9) && (x > 5) && (x <= 9)) {
				if (x <= 14 - y)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	 
	//���� �߻� �Լ�
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 6; i++)
		printf("%d ", 1 + rand() % 45);

}

void draw_star(int N) {

	int x, y;

	//1~N
	for (y = 1; y <= N; y++) {
		for (x = 1; x <= N; x++)
			if (x <= y)
				printf("*");
		printf("\n");
	}

	//N~1
	for (y = 1; y <= N; y++) {
		for (x = N; x > 0; x--)
			if (x >= y)
				printf("*");
		printf("\n");
	}
}

void draw_star_ri(int N) {
	int x, y;

	//1~N
	for (y = 1; y <= N; y++) {
		for (x = N; x > 0; x--)
			if (x >= y)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}

	//N~1;
	for (y = 1; y <= N; y++) {
		for (x = 1; x <= N; x++)
			if (x >= y)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}

}
