#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	//반복문 문제 3
	//나이에 따라 지원금 지급하기
	int age;
	int elderly = 0, adult = 0, teenager = 0, kid = 0;

	do {
		printf("가족 구성원의 나이를 입력해주세요(0 입력 시 종료): ");
		scanf_s("%d", &age);
		if ((age >= 1) && (age <= 12))
			kid++;
		else if ((age >= 13) && (age <= 19))
			teenager++;
		else if ((age >= 20) && (age <= 64))
			adult++;
		else if (age >= 65)
			elderly++;
	} while (age != 0);


	//do...while
	int i = 10;
	do {
		printf("i = %d\n", i);
		i++;
	} while (i < 3);


	//do...while을 이용한 메뉴
	int i = 0;

	do {
		printf("1---새로만들기\n");
		printf("2---파일열기\n");
		printf("3---파일닫기\n\n");
		printf("하나를 선택하시오: ");
		scanf_s("%d", &i);
	} while (i < 1 || i>3);

	printf("\n\n");

	switch (i) {
	case 1:
		printf("1을 선택하셨습니다.\n새로만들기를 실행합니다.\n");
		break;
	case 2:
		printf("2를 선택하셨습니다.\n파일열기를 실행합니다.\n");
		break;
	case 3:
		printf("3을 선택하셨습니다.\n파일닫기를 실행합니다.\n");
		break;
	}


	//숫자 추측 게임
	int answer = 59;
	int guess;
	int tries = 0;

	do {
		printf("정답을 추측하여 보시오: ");
		scanf_s("%d", &guess);
		tries++;

		if (guess > answer)
			printf("제시한 정수가 높습니다.\n");
		if (guess < answer)
			printf("제시한 정수가 낮습니다.\n");
	} while (guess != answer);

	printf("축하합니다. 정답입니다.\n시도횟수 %d번\n", tries);



}