#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void plus(int num1, int num2);
void minus(int num1, int num2);
void multiply(int num1, int num2);
void divide(int num1, int num2);

void add(int num1, int num2);
void sub(int num1, int num2);
void mul(int num1, int num2);
void div(int num1, int num2);

int count_global;

void get_dice_face();

void main(void)
{
	//���� Ƚ���� ����ϴ� ����
	//���� ���� ���� ���
	int num1, num2;
	char op;

	while (1) {
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &num1);
		scanf_s("%c", &op, 1);
		scanf_s("%d", &num2);

		switch (op) {
		case '+':
			plus(num1, num2);
			break;
		case '-':
			minus(num1, num2);
			break;
		case '*':
			multiply(num1, num2);
			break;
		case '/':
			divide(num1, num2);
			break;
		}
	}
	//���Ḧ ��ų ���� ��� ��Ȳ������;


	//���� Ƚ���� ����ϴ� ����
	//���� ���� ���
	int num1, num2;
	char op;

	while (1) {
		printf("������ �Է��Ͻÿ�: ");
		scanf_s("%d", &num1);
		scanf_s("%c", &op, 1);
		scanf_s("%d", &num2);

		switch (op) {
		case '+':
			add(num1, num2);
			break;
		case '-':
			sub(num1, num2);
			break;
		case '*':
			mul(num1, num2);
			break;
		case '/':
			div(num1, num2);
			break;
		}
	}


	//�ֻ��� ���� �� �� ���Դ��� ����ϴ� ���α׷�
	get_dice_face();

}

void plus(int num1, int num2) {
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("���� ���: %d\n\n", num1 + num2);
}

void minus(int num1, int num2) {
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("���� ���: %d\n\n", num1 - num2);
}

void multiply(int num1, int num2) {
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("���� ���: %d\n\n", num1 * num2);
}

void divide(int num1, int num2) {
	static int count = 0;
	count++;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);
	printf("���� ���: %d\n\n", num1 / num2);
}


void add(int num1, int num2) {
	count_global++;//�����ϸ� �� �ǰ� ���� ��߰ڴ°�
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count_global);
	printf("���� ���: %d\n\n", num1 + num2);
}

void sub(int num1, int num2) {
	count_global++;
	printf("�E���� �� %d�� ����Ǿ����ϴ�.\n", count_global);
	printf("���� ���: %d\n\n", num1 - num2);
}

void mul(int num1, int num2) {
	count_global++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count_global);
	printf("���� ���: %d\n\n", num1 * num2);
}

void div(int num1, int num2) {
	count_global++;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count_global);
	printf("���� ���: %d\n\n", num1 / num2);
}


void get_dice_face() {
	int i;

	srand((unsigned)time(NULL));

	while (1) {
		printf("%d ", 1 + rand() % 6);

	}

}

