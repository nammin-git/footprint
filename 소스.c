#include <stdio.h>

/*
#define SEC_PER_MINUTE 60

int main(void)
{

	int input, minute, second;

	printf("�ʸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d�ʴ� %d�� %d�� �Դϴ�.\n\n", input, minute, second);


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

	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d%d", &x, &y);

	printf("x==y�� �����: %d\n", x == y);
	printf("x!=y�� �����: %d\n", x != y);
	printf("x>y�� �����: %d\n", x > y);
	printf("x<y�� �����: %d\n", x < y);
	printf("x>=y�� �����: %d\n", x >= y);
	printf("x<=y�� �����: %d\n", x <= y);


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

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &year);

	printf("result=%d", leapyear(year));


	return 0;
}