#include <stdio.h>
#define SEED_MONEY 1000000

void main(void)
{
	//반복을 이용한 팩토리얼 구하기 1
	int n, i;
	long fact=1;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
		fact *= i;
	
	printf("%d!은 %d입니다.\n", n, fact);


	//반복을 이용한 팩토리얼 구하기 2
	int n, i = 1;
	long fact = 1;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	while (i <= n)
	{
		fact *= i;
		i++;
	}
	
	printf("%d!은 %d입니다.\n", n, fact);


	//중간점검
	int i;
	for (i = 1; i < 5; i++)
		printf("%d ", 2 * i);
	for (i = 10; i > 0; i = i - 2)
		printf("Student%d\n", i);


	//중첩 for문을 이용하여 *기호로 사각형 모양으로 출력하는 프로그램 1
	int x, y;

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 10; x++)
			printf("*");

		printf("\n");
	}


	//중첩 for문을 이용하여 줄 수를 *기호로 나타내는 프로그램 2
	int x, y, n = 1;
	
	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < n; x++)
			printf("*");
			
		n++;
		printf("\n");
	}
	
	//더 간단하게 n을 추가하지 않는 방법
	int x, y;

	for (y = 1; y <= 5; y++) {
		for (x = 0; x < y; x++)
			printf("*");
		printf("\n");		
	}


	//중첩 for문을 이용하여 직각 삼각형 찾기
	int a, b, c;

	for (a = 1; a < 100; a++) {
		for (b = 1; b < 100; b++){
			for (c = 1; c < 100; c++){
				if (a * a + b * b == c * c)
					printf("%d %d %d\n", a, b, c);
			}
		}
	}

	//주사위 2개를 던졌을 때 합이 6이 되는 경우의 수
	int dice1, dice2;

	for (dice1 = 1; dice1 <= 6; dice1++) {
		for (dice2 = 1; dice2 < 6; dice2++) {
			if (dice1 + dice2 == 6)
				printf("(%d %d)\n", dice1, dice2);
		}
	}

	//주사위 3개를 던졌을 때 합이 10이 되는 경우의 수
	int dice1, dice2, dice3;

	for (dice1 = 1; dice1 <= 6; dice1++) {
		for (dice2 = 1; dice2 <= 6; dice2++) {
			for (dice3 = 1; dice3 <= 6; dice3++) {
				if (dice1 + dice2 + dice3 == 10)
					printf("(%d %d %d)\n", dice1, dice2, dice3);
			}
		}
	}
	
	//중첩 for문을 이용한 곱하기
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d 곱하기 %d는 %d\n", i, j, i * j);
	}

	//몇 년 만에 원금의 10배가 되는지 출력하는 프로그램
	int year;
	double money;
	money = SEED_MONEY;
	
	for (year = 0; ; year++) {
		money += money * 0.3;
		if (money > SEED_MONEY * 10)
			break;
	}
	//이거 안 됨

	year = 0;
	while (1) {
		year++;
		money += money * 0.30;
		if (money > SEED_MONEY * 10)
			break;
	}

	printf("%d년 후면 원금의 10배가 됩니다.\n", year);


}