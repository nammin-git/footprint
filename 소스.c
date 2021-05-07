#include <stdio.h>
/*
//반복문 문제 1
//입력값이 1부터 n까지 더한 값보다 클 때, n을 찾는 프로그램

int sum(int num);

void main(void)
{

	int num;

	printf("수를 입력해주세요: ");
	scanf_s("%d", &num);
	
	printf("입력한 수보다 높을 때 합은 %d이고 1~%d번째까지 더한 수이다.\n", num + sum(num), sum(num));
}
//1-1. for 반복문
int sum(int num)
{
	int i, result = 0;

	for (i = 1; ; i++) {
		result += i;
		if (result > num)
			break; //break하면 ++이 안 되는 건가?
	}
	
	return i;
}

//1-2. while 반복문
int sum(int num)
{
	int i = 0 , result = 0;

	while (1) {
		result += i;
		if (result <= num)
			i++;
		else
			break;
	}

	return i;
}
*/

//반복문 문제 2
//1부터 입력값까지 정수를 역순으로 출력
//3과 5의 공배수는 "n"으로 출력

int Common_multiple(int n);

void main(void)
{
	int n;

	printf("수를 입력해주세요: ");
	scanf_s("%d", &n);

	Common_multiple(n);
}

int Common_multiple(int n)
{
	int i;

	for (i = n; n > 0; n--) {
		printf("%d ", n);
		if (n % 10 == 1)
			printf("\n");
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("\"%d\" ", n);
	}
	return;
}
