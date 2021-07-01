#include <stdio.h>

//1부터 10까지 제곱값과 세제곱값 출력하는 프로그램
#define SIZE 10

void power(int a[][10]);

void main()
{
	int a[3][SIZE] = { 0 };

	//첫째 열에 정수
	for (int i = 0; i < SIZE; i++) {
		a[0][i] = i + 1;
		printf("%4d ", a[0][i]);
	}
	printf("\n");

	power(a);

	//두번째 열에 제곱값
	for (int i = 0; i < SIZE; i++) {
		printf("%4d ", a[1][i]);
	}
	printf("\n");

	//세번째 열에 세제곱값
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

	for (int i = 0; i < SIZE; i++) {
		if (a[2][i] == num) {
			printf("%d의 세제곱근은 %d", num, a[0][i]);
			break;
		}
		else if(a[2][i])
	}

}


void power(int a[][10]) {
	for (int j = 0; j < SIZE; j++) {
		a[1][j] = a[0][j] * a[0][j];
		a[2][j] = a[0][j] * a[0][j] * a[0][j];
	}
}

