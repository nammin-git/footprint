#include <stdio.h>
#define START_DAY 6
#define DATE_OF_MONTH 31

void main(void)
{
	//달력 만들기
	int day, date;

	printf("============================\n");
	printf(" 일  월  화  수  목  금  토\n");
	printf("============================\n");

	for (day = 0; day < START_DAY; day++)
		printf("    ");

	for (date = 1; date <= DATE_OF_MONTH; date++) {
		if (day == 7) {
			day = 0;
			printf("\n");
		}
		day++;
		printf("%3d ", date);
		if (date == DATE_OF_MONTH)
			printf("\n");
	}

	printf("============================\n");


	//"Hello World"가 몇 번 출력되는가
	int x;
	for (x = 0; x < 10; x++) {
		if (x < 5)
			continue;
		else
			break;
		printf("Hello World!\n");
	}

	int x, y;
	for (x = 0; x < 3; x++)
		for (y = 2; y >= 0; y--)
			printf("*");

	int i = 5;
	for (; i; i--)
		printf("%d", i);


	//시그마
	int i, sum = 0, result = 0;

	for (i = 1; i <= 30; i++) {
		sum = i * i + 1;
		result += sum;
	}

	printf("%d", result);


	//1부터 100까지 모든 3의 배수의 합을 구하는 프로그램
	int n, sum = 0;

	//while 루프
	n = 1;
	while (3 * n <= 100) {
		sum += 3 * n;
		n++;
	}
	printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.\n", sum);

	//for 루프
	for (n = 1; 3 * n <= 100; n++) {
		sum += 3 * n;
	}
	
	printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.\n", sum);


	//입력한 정수의 합을 계산하는 프로그램
	int number, sum = 0;

	while (scanf_s("%d", &number) != EOF) {
		sum += number;
	}
	
	printf("정수의 합은 %d입니다.\n", sum);


	//반복 루프를 사용하여 패턴 출력하기
	int x, y, z;
	
	for (y = 1; y <= 7; y++) {
		for (z = 1; z <= 7 - y; z++)
			printf(" ");
		for (x = 1; x <= y; x++)
			printf("*");
		printf("\n");
	}


	//중첩 반목문을 사용하여 숫자로 탑 쌓기
	int number;
	int x, y;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &number);

	printf("\n");
	
	for (y = 1; y <= number; y++) {
		for (x = 1; x <= y; x++)
			printf("%d ", x);
		printf("\n");
	}

}