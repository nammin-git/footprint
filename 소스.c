#include <stdio.h>
#include <windows.h>

void add();
void sub();
void mul();
void divide();


void main(void)
{
	//10초 후 경고 벨소리가 울리는 프로그램
	int timer;
	
	for (timer = 10; timer > 0; timer--) {
		printf("%d ", timer);
		Sleep(1000);
	}
	printf("\a");


	//시간을 지연시킬 목적의 반복문
	int t;

	printf("카운터의 초기값을 입력하시오: ");
	scanf_s("%d", &t);

	for (; t > 0; t--) {
		printf("%d ", t);
		Sleep(1000);
	}

	printf("\a");


	//계산 유형을 선택할 수 있는 계산기 프로그램
	//for 버전
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
	printf("연산을 선택하시오: ");
	scanf_s(" %c", &calculator, 1);
	if (calculator == 'Q')
		break;

	if (!(calculator == 'A') && !(calculator == 'S') && !(calculator == 'M') && !(calculator == 'D'))
		continue;

	printf("두 수를 공백으로 분리하여 입력하시오: ");
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

	printf("연산의 결과는 %d입니다.\n\n", result);
	}


	//do...while 버전
	char op;

	printf("****************\n");
	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Multiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quiz\n");
	printf("****************\n\n");

	do {
		printf("연산을 선택하시오: ");
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

	printf("두수를 공백으로 분리하여 입력하시오: ");
	scanf_s("%d %d", &num1, &num2);
	printf("연산의 결과는 %d입니다.\n\n", num1 + num2);
}

void sub() {
	int num1, num2;

	printf("두수를 공백으로 분리하여 입력하시오: ");
	scanf_s("%d %d", &num1, &num2);
	printf("연산의 결과는 %d입니다.\n\n", num1 - num2);

}

void mul() {
	int num1, num2;

	printf("두수를 공백으로 분리하여 입력하시오: ");
	scanf_s("%d %d", &num1, &num2);
	printf("연산의 결과는 %d입니다.\n\n", num1 * num2);

}

void divide() {
	int num1, num2;

	printf("두수를 공백으로 분리하여 입력하시오: ");
	scanf_s("%d %d", &num1, &num2);
	printf("연산의 결과는 %d입니다.\n\n", num1 / num2);

}
