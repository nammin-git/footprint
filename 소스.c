#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�Լ�

int main()
{
	//funciton
	//����

	int num = 2;
	//printf("num �� %d �Դϴ�.\n", num);
	p(num);

	//2 + 3 ��?
	num = num+3;
	//printf("num �� %d �Դϴ�.\n", num);
	p(num);

	//5 - 1 ��?
	num -= 1;
	//printf("num �� %d �Դϴ�.\n", num);
	p(num);

	//4 x 3 ��?
	num *= 3;
	//printf("num �� %d �Դϴ�.\n", num);
	p(num);

	//12 / 6 ��?
	num /= 6;
	//printf("num �� %d �Դϴ�.\n", num);
	p(num);
}


//���� �Լ�
void p(int num);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

void main()
{
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);
}

void p(int num) {
	printf("num �� %d �Դϴ�.\n", num);
}

int add(int num1, int num2) {
	return num1 + num2;
}

int sub(int num1, int num2) {
	return num1 - num2;
}

int mul(int num1, int num2) {
	return num1 * num2;
}

int div(int num1, int num2) {
	return num1 / num2;
}


//��й�ȣ ������
int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main()
{
	//���� 5���� �ְ�, �� ������ ���� ����� ���� ��� ���� (����)
	//������ ���, Ʋ���� ����

	srand((unsigned)time(NULL));

	int count = 0;

	for (int i = 1; i <= 5; i++) {
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);

		showQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1) {
			exit(0);
		}
		else if (answer == num1 * num2) {
			success();
			count++;
		}
		else {
			fail();
		}
	}

	printf("\n\n ����� 5���� ��й�ȣ �� %d���� ������ϴ� \n", count);

	return 0;
}

int getRandomNumber(int level) {
	return (1 + rand() % (level * 7));
}

void showQuestion(int level, int num1, int num2) {
	printf("\n\n\n############# %d ��° ��й�ȣ ##########\n", level);
	printf("\n\t%d x %d ��?\n\n", num1, num2);
	printf("#############################\n");
	printf("��й�ȣ�� �Է��ϼ���(���� : -1) >> ");
}

void success() {
	printf("\n >> Good ! �����Դϴ� \n");
}

void fail() {
	printf("\n >> �� ! Ʋ�Ƚ��ϴ� \n");
}

