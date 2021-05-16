#include <stdio.h>
#define SEED_MONEY 1000000
#include <Windows.h>

void add();

void main(void)
{
	//몇 년 만에 원금의 10배가 되는지 출력하는 프로그램
	int year;
	double money;
	money = SEED_MONEY;

	for (year = 0; ; year++) {
		money += money * 0.3;
		if (money > SEED_MONEY * 10)
			break;
	}

	year++;

	printf("%d\n", year);


	//for 반복문을 이용하여 A+B 출력
	int n, i;
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		add();
	}


	//빠른 A+B
	long T, i;
	scanf_s("%d", &T);

	for (i = 0; i < T; i++) {
		add();
	}


	//N부터 1까지 한 줄에 하나씩 출력하는 프로그램
	int N, i;
	scanf_s("%d", &N);

	for (i = N; i > 0; i--) {
		printf("%d\n", i);
		Sleep(100);
	}


}

void add(){
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("%d\n", num1 + num2);
}
