//반복문 문제
#include <stdio.h>

//9번 문제
//계약직 직원의 급여를 계산하는 프로그램
#define HOUR_SALARY 5500
#define OVERTIME 140

void main()
{
	int work_time;
	int salary = 0;

	printf("근무 시간을 입력해주세요: ");
	scanf_s("%d", &work_time);

	for (int i = 0; i < work_time; i++) {
		if (i < OVERTIME)
			salary += HOUR_SALARY;
		else
			salary += HOUR_SALARY * 1.5;
	}

	printf("세전 급여는 %d원 입니다.\n", salary);

	float tax_percent;

	if (salary < 800000)
		tax_percent = 0.07;
	else
		tax_percent = 0.1;

	float take_home = 0;
	take_home = salary * (1 - tax_percent);

	printf("세후 급여는 %.0f원 입니다.\n", take_home);

}