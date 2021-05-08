#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	//반복문 문제 3
	//나이에 따라 지원금 지급하기
	int age, i = 0;
	int elderly = 0, adult = 0, juvenile = 0, kid = 0;

	while (1) {
		printf("가족 구성원의 나이를 입력해주세요 (0 입력 시 종료): ");
		scanf_s("%d", &age);

		if (age==0)
			break;

		if ((age >= 1) && (age <= 12))
			kid++;
		else if ((age >= 13) && (age <= 19))
			juvenile++;
		else if ((age >= 20) && (age <= 64))
			adult++;
		else if ((age >= 65))
			elderly++;

		i++;
	}

	printf("..조사종료..\n<귀댁의 가족 구성>\n");
	printf("총 %d명 노인 %d명, 성인 %d명, 청소년 %d명, 아동 %d명\n", i, elderly, adult, juvenile, kid);
	printf("코로나 지원금은 총 %d만원 입니다.\n", 10*elderly+20*(juvenile+kid));


	//이중 반복문 문제 1-1
	//별로 탑 쌓기
	int x, y;

	for (y = 1; y <= 5; y++) {
		for (x = 1; x <= y; x++) {
			printf("*");
		}
		printf("\n");	
	}


	//이중 반복문 문제 1-2
	//별로 거꾸로된 탑 쌓기
	int x, y;

	for (y = 5; y > 0; y--) {
		for (x = 5; x >= y; x--)
			printf("*");
		printf("\n");
	}
	//안 됨


	//이중 반복문 문제 2-1
	//구구단 출력 가로버전
	int table, n;

	for (table = 1; table <= 9; table++) {
		for (n = 1; n <= 9; n++) {
			printf("%dx%d=%d ", table, n, table * n);
		}
		printf("\n");
	}

	//이중 반복문 문제 2-2
	//구구단 출력 세로버전
	int table, n;
	for (n = 1; n <= 9; n++) {
		for (table = 1; table <= 9; table++)
			if (table*n<10)
				printf("%dX%d=%d  ", table, n, table * n);
			else
				printf("%dX%d=%d ", table, n, table * n);
		printf("\n");
	}


}
