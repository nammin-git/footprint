//2021 �޷� �����

#include <stdio.h>
#define YEAR 2021
#define FIRST_DAY_OF_YEAR 5

int how_many_date(int month);

void main(void)
{
	int day, date, month = 1;
	printf("===========================\n");
	printf("%20d�� %d��\n", YEAR, month);

	printf("---------------------------\n");
	printf("��  ��  ȭ  ��  ��  ��  ��\n");

	printf("---------------------------\n");
	for (day = 0; day < FIRST_DAY_OF_YEAR; day++)
		printf("  ");
	for (date = 1; date <= how_many_date(month); date++);
	
	printf("---------------------------\n");


	printf("===========================\n");



}

int how_many_date(int month)
{
	int date = 0;

	switch (month) {
	case 2:
		date = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		date = 28;
		break;
	default:
		date = 31;
		break;
	}

	return date;
}