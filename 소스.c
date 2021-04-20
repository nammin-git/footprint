#include <stdio.h>

int leapyear(int year);


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
	int num_absolute;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num_absolute);

	if (num_absolute < 0)
		num_absolute = -num_absolute;


	printf("절대값은 %d입니다.\n", num_absolute);


	//복합문
	int score;

	printf("점수를 입력하시오: ");
	scanf_s("%d", &score);

	if (score >= 90)
	{
		printf("합격입니다.\n");
		printf("장학금도 받을 수 있습니다.\n");
	}
	else
	{
		printf("불합격입니다,\n");
		printf("장학금도 받을 수 없습니다.\n");
	}


	printf("점수를 입력하시오: ");
	scanf_s("%d", &score);

	if (score >= 60)
	{ 
		printf("합격입니다.\n");
		printf("장학금도 받을 수 있습니다.\n");
	}
	else
		printf("불합격입니다.\n");
		printf("장학금도 받을 수 없습니다.\n");


	//부수작용(side effect)
	int line_count = 0;

	if (++line_count > 20)
	{
		printf("\n");
		line_count = 0;
	}


	//if_else1.c 홀짝 판별 프로그램
	int number;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &number);

	if (number % 2 == 0)
		printf("%d는 짝수입니다,\n", number);
	else
		printf("%d는 홀수입니다,\n", number);


	//if_else2.c 나눗셈
	int n, d, result;

	printf("분자를 입력하시오: ");
	scanf_s("%d", &n);

	printf("분모를 입력하시오: ");
	scanf_s("%d", &d);

	if (d == 0)
		printf("0으로 나눌 수 없습니다.\n");
	else
	{
		result = n / d;
		printf("%d 나누기 %d는 %d입니다.\n", n, d, result);
	}


	//leap_year.c
	int year;
	int result;

	printf("연도를 입력하시오: ");
	scanf_s("%d", &year);

	result = leapyear(year);
	
	if (result == 0)
		printf("%d는 윤년이 아닙니다.\n", year);
	else
		printf("%d는 윤년입니다.\n", year);
	

	//large_small
	int n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	if (n >= 100)
		printf("%d는 100보다 크거나 같습니다.\n", n);
	else
		printf("%d는 100보다 작습니다.\n", n);



	return 0;
}

int leapyear(int year)
{
	int result;
	result = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);

	return result;
}