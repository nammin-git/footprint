//2021 �޷� �����

#include <stdio.h>
//#define YEAR 2021
//#define FIRST_DAY_OF_JENUARY 5
#define YEAR 2012
#define FIRST_DAY_OF_JENUARY 0

int how_many_date(int month);

void main(void)
{
	int day, date, month;
	int start_day = 0;

	for (month = 1; month <= 12; month++){
		printf("===========================\n");
		printf("%20d�� %d��\n", YEAR, month);

		printf("---------------------------\n");
		printf("��  ��  ȭ  ��  ��  ��  ��\n");

		printf("---------------------------\n");

		//�ſ� 1�� ������ �������� ó��
		if (month == 1)
			for (day = 0; day < FIRST_DAY_OF_JENUARY; day++)
				printf("    ");
		else
			for (day = 0; day < start_day; day++)
					printf("    ");

		//��¥ ����ϱ�
		for (date = 1; date <= how_many_date(month); date++) {
			if ((date == 1) && (start_day == 0)) {
				printf("%3d ", date);
				if (day == 7) {
					day = 0;
					printf("\n");
				}
				day++;
				if (date == how_many_date(month)) {
					printf("\n");
					start_day = day;
				}
			}
				
			else
			{
				if (day == 7) {
					day = 0;
					printf("\n");
				}
				day++;
				printf("%3d ", date);
				if (date == how_many_date(month)) {
					printf("\n");
					start_day = day;
				}
			}

					
		}
		printf("===========================\n\n");
	}


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
		date = 30;
		break;
	default:
		date = 31;
		break;
	}

	return date;
}