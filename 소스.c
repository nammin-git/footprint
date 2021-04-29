#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	//가위바위보 게임
	int a;
	int b = (rand() % 100);

	printf("선택하시오(1: 가위 2: 바위 3: 보) ");
	scanf_s("%d", &a);

	if (a == b)
		printf("비겼음\n");
	else if (a - b == 1)
		printf("사용자가 이김\n");
	else if (a - b == -1)
		printf("컴퓨터가 이김\n");
	else if (a - b == 2)
		printf("컴퓨터가 이김\n");
	else if (a - b == -2)
		printf("사용자가 이김\n");
	else
		printf("알맞은 숫자를 입력하시오.\n");
	exit(0);
	//****************난수가 발생이 안 되어 실패


	//for문으로 Hello World 찍어내기
	int i;

	for (i = 0; i < 10; i++)
		printf("Hello World\n");


	//for문을 사용하여 1부터 10까지의 정수를 더하기
	int i, sum = 0;

	for (i = 1; i <= 10; i++) {
		sum += i;
	}

	printf("1부터 10까지의 총합은 %d입니다.\n", sum);


	//for문을 사용하여 세제곱을 나열하는 프로그램
	int n, i, pn;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	printf("==================================\n");
	printf("     n              n의 세제곱       \n");
	printf("==================================\n");

	for (i = 1; i <= n; i++) {
		pn = i * i * i;
		printf("%6d", i);
		printf("%20d\n", pn);
	}
	//변수 최소화
	for (i = 1; i <= n; i++) {
		printf("%6d              %6d\n", i, i * i * i);
	}

}