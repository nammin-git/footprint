#include <stdio.h>

/*
#define SEC_PER_MINUTE 60

int main(void)
{

	int input, minute, second;

	printf("초를 입력하시오: ");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d초는 %d분 %d초 입니다.\n\n", input, minute, second);


	int x = 10, y = 10;
	printf("x=%d\n", x);
	printf("++x=%d\n", ++x);
	printf("x=%d\n\n", x);

	printf("y=%d\n", y);
	printf("y++=%d\n", y++);
	printf("y=%d\n", y);
	

	int i;
	double f;

	f = 5 / 4;
	printf("%f\n", f);

	f = (double)5 / 4;
	printf("%f\n", f);

	f = 5.0 / 4;
	printf("%f\n", f);

	f = (double)5 / (double)4;
	printf("%f\n", f);

	i = 1.3 + 1.8;
	printf("%d\n", i);

	i = (int)1.3 + (int)1.8;
	printf("%d\n", i);

	

	int x, y;

	printf("두 개의 정수를 입력하시오: ");
	scanf_s("%d%d", &x, &y);

	printf("x==y의 결과값: %d\n", x == y);
	printf("x!=y의 결과값: %d\n", x != y);
	printf("x>y의 결과값: %d\n", x > y);
	printf("x<y의 결과값: %d\n", x < y);
	printf("x>=y의 결과값: %d\n", x >= y);
	printf("x<=y의 결과값: %d\n", x <= y);


	return 0;
}

*/


int leapyear(int year)
{
	(year%4)&&


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