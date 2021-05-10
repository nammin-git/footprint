#include <stdio.h>

void main(void)
{
	//반복문 문제 3
	//나이에 따라 지원금 지급하기
	int age = 1;
	int sinior = 0, adult = 0, teenager = 0, junior = 0;

	while (1) {
		if (age != 0) {
			printf("가족 구성원의 나이를 입력해주세요(0 입력시 종료): ");
			scanf_s("%d", &age);
		}
		else
			break;
		if ((age >= 1) && (age <= 12))
			junior++;
		else if ((age >= 12) && (age <= 19))
			teenager++;
		else if ((age >= 20) && (age <= 64))
			adult++;
		else if (age >= 65)
			sinior++;
	}
	
	printf("..조사 종료..\n총 %d명 노인 %d명, 성인 %d명, 청소년 %d명, 아동 %d명\n", sinior+adult+teenager+junior, sinior, adult, teenager, junior);
	printf("코로나 지원금은 총 %d만원 입니다.\n", 10 * sinior + 20 * (teenager + junior));


	//이중 반복문 문제 3 - 1
	//입력받은 수를 가지고 별 출력하기
	int N, x, y;

	printf("N을 입력하시오: ");
	scanf_s("%d", &N);

	for (y = 0; y < N; y++) {
		for (x = 0; x <= y; x++)
			printf("*");
		printf("\n");
	}

	//이중 반복문 문제 3 - 2
	//입력받은 수를 가지고 별 출력하기
	int N, x, y;

	printf("N을 입력하시오: ");
	scanf_s("%d", &N);

	for (y = N; y > 0; y--) {
		for (x = 1; x <= y; x++)
			printf("*");
		printf("\n");
	}


	//이중 반복문 문제 1 - 2
	//별탑 반대로 쌓기
	int x, y;

	for (y = 5; y > 0; y--) {
		for (x = 1; x <= y; x++)
			printf("*");
		printf("\n");
	}


	//이중 반복문 문제 4 - 1
	//별 탑 오른쪽 정렬
	int x, y, z;

	for (y = 0; y < 5; y++) {
		for (z = y; 5 - z > 0; z++)
				printf(" ");
		for (x = 0; x <= y; x++)
			printf("*");
						
		printf("\n");
	}


	//이중 반복문 문제 4 - 1
	//별 탑 오른쪽 정렬
	int x, y, z;

	for (y = 0; y < 5; y++) {
		for (x = 0; x <= y; x++)
			printf(" ");
		for (z = y; 5 - z >0 ; z++)
			printf("*");
						
		printf("\n");
	}


	//이중 반복문 문제 5
	//별 기호로 마름모 모양 만들기
	int x, y, z;

	for (y = 1; y <= 9; y++) {
		if (y < 5) {
			for (z = y; 5 - z > 0; z++)
				printf(" ");
			for (x = 1; x <= 2*y-1; x++)
				printf("*");
			printf("\n");
		}
		else if (y == 5) {
			for (x = 1; x <= 2 * y - 1; x++)
				printf("*");
			printf("\n");
		}
		else 
		{
			for (z = 10 - y; 5 - z > 0; z++)
				printf(" ");
			for (x = 1; x <= 19 - 2 * y; x++)
				printf("*");
			printf("\n");
		}
		//왜 19? 방정식으로 해보니까 식이 나오던데 왜 19인지 모름
	}

}