#include <stdio.h>

int add7();
void draw_star9(int n);
void draw_star10(int n);

void main(void)
{
	//for �� 7�� ����
	//A+B�� ���� �� �Ƹ���� ����ϴ� ����
	int T7, i;
	
	scanf_s("%d", &T7);

	for (i = 1; i <= T7; i++) {
		printf("Case #%d: %d\n", i, add7());
	}


	//for �� 8�� ����
	//A + B�� �ٷ� �� �������� �Ƹ���� ����ϴ� ����
	int T8;
	int num1, num2;

	scanf_s("%d", &T8);

	for (i = 1; i <= T8; i++) {
		scanf_s("%d %d", &num1, &num2);
		printf("Case #%d: %d + %d = %d\n", i, num1, num2, num1 + num2);
	}


	//for �� 9�� ����
	//���� ��� ���� 1
	int N9;

	scanf_s("%d", &N9);

	draw_star9(N9);


	//for �� 10�� ����
	//���� ��� ���� 2
	int N10;

	scanf_s("%d", &N10);

	draw_star10(N10);


	//for �� 11�� ����
	//for�� if�� ���� ���� ����
	int N, X, i, input;

	scanf_s("%d %d", &N, &X);

	for (i = 1; i <= N; i++) {
		scanf_s("%d", &input);
		if (X <= input)
			continue;
		else
			printf("%d ", input);
	}


}

int add7() {
	int num1, num2;

	scanf_s("%d %d", &num1, &num2);

	return num1 + num2;
}

void draw_star9(int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			if (i >= j)
				printf("*");
		printf("\n");
	}
}

void draw_star10(int n) {
	int x, y;

	for (y = 1; y <= n; y++) {
		for (x = n; x > 0; x--)
			if (x > y)
				printf(" ");
			else
				printf("*");
		printf("\n");
	}
}

