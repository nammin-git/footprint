#include <stdio.h>
#define START_DAY 3
#define DAYS_OF_MONTH 31


void main(void)
{
	//복리 이자 계산
	double seed_money, interest_rate, total;
	int year, i = 0;

	printf("원금: ");
	scanf_s("%lf", &seed_money);
	printf("이율(%%): ");
	scanf_s("%lf", &interest_rate);
	printf("기간(년): ");
	scanf_s("%d", &year);

	printf("==================\n");
	printf("연도       원리금\n");
	printf("==================\n");

	total =	seed_money;
	interest_rate = interest_rate / 100;

	while (i < year) {
		total *= (1 + interest_rate);
		printf("%d         %.1f\n", i+1, total);
		i++;
	}


	//달력 출력하기
	int day, date;

	printf("=============================\n");
	printf(" 일  월  화  수  목  금  토\n");
	printf("=============================\n");

	for (day = 0; day < START_DAY; day++)
		printf("    ");

	for (date = 1; date <= DAYS_OF_MONTH; date++) {
		if (day == 7) {
			day = 0;
			printf("\n");
		}
		day++;
		if (day == 0)
			printf("%d ", date);
		else
			printf("%3d ", date);
	}

	printf("\n=============================\n");
	//다시 해야함


}