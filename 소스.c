#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//함수

int main()
{
	//funciton
	//계산기

	int num = 2;
	//printf("num 은 %d 입니다.\n", num);
	p(num);

	//2 + 3 은?
	num = num+3;
	//printf("num 은 %d 입니다.\n", num);
	p(num);

	//5 - 1 은?
	num -= 1;
	//printf("num 은 %d 입니다.\n", num);
	p(num);

	//4 x 3 은?
	num *= 3;
	//printf("num 은 %d 입니다.\n", num);
	p(num);

	//12 / 6 은?
	num /= 6;
	//printf("num 은 %d 입니다.\n", num);
	p(num);
}


//계산기 함수
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
	printf("num 은 %d 입니다.\n", num);
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


//비밀번호 마스터
int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main()
{
	//문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제 (랜덤)
	//맞히면 통과, 틀리면 실패

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

	printf("\n\n 당신은 5개의 비밀번호 중 %d개를 맞췄습니다 \n", count);

	return 0;
}

int getRandomNumber(int level) {
	return (1 + rand() % (level * 7));
}

void showQuestion(int level, int num1, int num2) {
	printf("\n\n\n############# %d 번째 비밀번호 ##########\n", level);
	printf("\n\t%d x %d 는?\n\n", num1, num2);
	printf("#############################\n");
	printf("비밀번호를 입력하세요(종료 : -1) >> ");
}

void success() {
	printf("\n >> Good ! 정답입니다 \n");
}

void fail() {
	printf("\n >> 떙 ! 틀렸습니다 \n");
}

