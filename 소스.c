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
	//연산 횟수를 기억하는 계산기
	//정적 지역 변수 사용
	int num1, num2;
	char op;

	while (1) {
		printf("연산을 입력하시오: ");
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
	//종료를 시킬 수가 없어서 당황스러움;


	//연산 횟수를 기억하는 계산기
	//전역 변수 사용
	int num1, num2;
	char op;

	while (1) {
		printf("연산을 입력하시오: ");
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


	//주사위 면이 몇 번 나왔는지 출력하는 프로그램
	get_dice_face();

}

void plus(int num1, int num2) {
	static int count = 0;
	count++;
	printf("덧셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산 결과: %d\n\n", num1 + num2);
}

void minus(int num1, int num2) {
	static int count = 0;
	count++;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산 결과: %d\n\n", num1 - num2);
}

void multiply(int num1, int num2) {
	static int count = 0;
	count++;
	printf("곱셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산 결과: %d\n\n", num1 * num2);
}

void divide(int num1, int num2) {
	static int count = 0;
	count++;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산 결과: %d\n\n", num1 / num2);
}


void add(int num1, int num2) {
	count_global++;//공유하면 안 되고 따로 써야겠는걸
	printf("덧셈은 총 %d번 실행되었습니다.\n", count_global);
	printf("연산 결과: %d\n\n", num1 + num2);
}

void sub(int num1, int num2) {
	count_global++;
	printf("뺼셈은 총 %d번 실행되었습니다.\n", count_global);
	printf("연산 결과: %d\n\n", num1 - num2);
}

void mul(int num1, int num2) {
	count_global++;
	printf("곱셈은 총 %d번 실행되었습니다.\n", count_global);
	printf("연산 결과: %d\n\n", num1 * num2);
}

void div(int num1, int num2) {
	count_global++;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count_global);
	printf("연산 결과: %d\n\n", num1 / num2);
}


void get_dice_face() {
	int i;

	srand((unsigned)time(NULL));

	while (1) {
		printf("%d ", 1 + rand() % 6);

	}

}

