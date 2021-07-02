#include <stdio.h>

//1부터 10까지 제곱값과 세제곱값 출력하는 프로그램
#define SIZE 10

//제곱값과 세제곱값을 계산하는 함수
void power(int a[][10]);

//특정 값을 배열에서 찾기
void search_target(int a[][10], int t);

void main()
{
	int a[3][SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++) {
		a[0][i] = i + 1;
		printf("%4d ", a[0][i]);
	}
	printf("\n");

	power(a);

	for (int i = 0; i < SIZE; i++) {
		printf("%4d ", a[1][i]);
	}
	printf("\n");

	for (int i = 0; i < SIZE; i++) {
		printf("%4d ", a[2][i]);
	}
	printf("\n");


	//세제곱값 입력받기
	int num;

	printf("------------------\n");
	printf("세제곱근을 찾아드립니다.\n");
	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);
	
	search_target(a, num);
}


void power(int a[][10]) {
	for (int j = 0; j < SIZE; j++) {
		a[1][j] = a[0][j] * a[0][j];
		a[2][j] = a[0][j] * a[0][j] * a[0][j];
	}
}


void search_target(int a[][10], int t) {
	int count = 0;

	for (int i = 0; i < SIZE; i++) {
		if (a[2][i] == t) {
			printf("%d의 세제곱근은 %d", t, a[0][i]);
			break;
		}
		else
			count++;
	}

	if (count == SIZE)
		printf("정수 범위 내에서 세제곱근을 찾을 수 없습니다.\n");
}


//학생들의 시험 점수를 통계 처리하는 프로그램
#define STUDENTS 10

void main(void)
{
	int 


}


