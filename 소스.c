#include <stdio.h>
#include <windows.h>

void add();
void sub();
void mul();
void divide();


void main(void)
{
	//10�� �� ��� ���Ҹ��� �︮�� ���α׷�
	int timer;
	
	for (timer = 10; timer > 0; timer--) {
		printf("%d ", timer);
		Sleep(1000);
	}
	printf("\a");


	//�ð��� ������ų ������ �ݺ���
	int t;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
	scanf_s("%d", &t);

	for (; t > 0; t--) {
		printf("%d ", t);
		Sleep(1000);
	}

	printf("\a");


	//��� ������ ������ �� �ִ� ���� ���α׷�
	//for ����
	int num1, num2;
	char calculator;
	int result = 0;

	printf("****************\n");
	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Multiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quiz\n");
	printf("****************\n\n");

	while (1) {
	printf("������ �����Ͻÿ�: ");
	scanf_s(" %c", &calculator, 1);
	if (calculator == 'Q')
		break;

	if (!(calculator == 'A') && !(calculator == 'S') && !(calculator == 'M') && !(calculator == 'D'))
		continue;

	printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &num1, &num2);

	if (calculator == 'A')
		result = num1 + num2;
	else if (calculator == 'S')
		result = num1 - num2;
	else if (calculator == 'M')
		result = num1 * num2;
	else if (calculator == 'D')
		result = num1 / num2;
	else
		continue;

	printf("������ ����� %d�Դϴ�.\n\n", result);
	}


	//do...while ����
	char op;

	printf("****************\n");
	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Multiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quiz\n");
	printf("****************\n\n");

	do {
		printf("������ �����Ͻÿ�: ");
		scanf_s(" %c", &op, 1);

		switch (op) {
		case 'A':
		case'a':
			add();
			break;
		case 'S':
		case's':
			sub();
			break;
		case 'M':
		case'm':
			mul();
			break;
		case 'D':
		case'd':
			divide();
			break;
		case 'Q':
		case'q':
			break;
		default:
			continue;
		}
	} while ((op != 'Q') && (op != 'q'));

}

void add(){
	int num1, num2;

	printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &num1, &num2);
	printf("������ ����� %d�Դϴ�.\n\n", num1 + num2);
}

void sub() {
	int num1, num2;

	printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &num1, &num2);
	printf("������ ����� %d�Դϴ�.\n\n", num1 - num2);

}

void mul() {
	int num1, num2;

	printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &num1, &num2);
	printf("������ ����� %d�Դϴ�.\n\n", num1 * num2);

}

void divide() {
	int num1, num2;

	printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &num1, &num2);
	printf("������ ����� %d�Դϴ�.\n\n", num1 / num2);

}
