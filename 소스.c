#include <stdio.h>


int leapyear(int year)
{
	int result;

	result = ((year % 4) == 0) ? 1 : 0;

	if ((year % 400) == 0)
		return 1;
	if ((year % 100) == 0)
		return 0;


	return result;
}

int main(void)
{
	int year;

	printf("연도를 입력하시오: ");
	scanf_s("%d", &year);

	printf("result=%d", leapyear(year));


	return 0;
}