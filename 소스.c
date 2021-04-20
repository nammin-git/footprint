#include <stdio.h>

int main(void)
{
	//if문은 조건식이 참일 때만 실행
	int num = 5;

	if (num > 0)
		printf("양수입니다.\n");


	int temperature = 17;

	if (temperature < 0)
		printf("영하입니다.\n");


	//if1.c 양수입니다
	int number;
	
	printf("정수를 입력하시오: ");
	scanf_s("%d", &number);
	printf("입력된 값은 %d입니다.\n", number);

	if (number > 0)
		printf("양수입니다.\n");


	//if2.c 절대값 구하기



	return 0;
}