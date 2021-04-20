#include <stdio.h>
/*
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
*/

int main(void)
{
	//다중 if문
	int score;
	
	printf("점수를 입력하시오: ");
	scanf_s("%d", &score);

	if (score >= 80)
		if (score >= 90)
			printf("A 학점입니다.\n");
		else
			printf("B 학점입니다.\n");
	else
		printf("C학점입니다.\n");

	if (score >= 80)
	{
		if (score >= 90)
			printf("A 학점입니다.\n");
		else
			printf("B 학점입니다.\n");
	}
	else
		printf("A학점이나 B학점은 아닙니다.\n");


	//성적을 입력받아 학점을 결정하는 프로그램
	int score;

	printf("점수를 입력하시오: ");
	scanf_s("%d", &score);

	if (score >= 90)
	{
		printf("A학점입니다,\n");
		printf("장학금을 받을 수 있습니다.\n");
	}
	else if (score >= 80)
		printf("B학점입니다,\n");
	else if (score >= 70)
		printf("C학점입니다,\n");
	else if (score >= 60)
		printf("D학점입니다,\n");
	else
		printf("F학점입니다.\n");


	//문자들을 분류하는 프로그램
	char ch;

	printf("영어 문자를 입력하시오: ");
	scanf_s("%c", &ch);
	//왜 경고 뜨지?

	if (ch >= 'A' && ch <= 'Z')
		printf("%c는 대문자입니다.", ch);
	else if (ch >= 'a' && ch <= 'z')
		printf("%c는 소문자입니다.", ch);
	else if (ch >= '0' && ch <= '9')
		printf("%c는 숫자입니다.", ch);
	else
		printf("문자도 숫자도 아닙니다.");


	//이차방정식
	int a, b, c;
	float dis, sol1, sol2;

	printf("계수 a를 입력하시오: ");
	scanf_s("%d", &a);

	printf("계수 b를 입력하시오: ");
	scanf_s("%d", &b);

	printf("계수 c를 입력하시오: ");
	scanf_s("%d", &c);

	if (a == 0)
	{
		sol1 = sol2 = -(c / b);
		printf("방정식의 근은 %d입니다.", sol1);
	}
	else if ((b * b - 4 * a * c) > 0)
		printf("실근은 존재하지 않습니다.");
	else
		sol1=-b+


	return 0;
}