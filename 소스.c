#include <stdio.h>

void early(int H, int M);

void main(void)
{
	//�˶� �ð� 1
	int H, M;

	scanf_s("%d %d", &H, &M);

	//if ((M >= 0) || (M <= 59))
	//	if ((H >= 0) || (H <= 23))
	if (H != 0)
		if (M >= 45)
			printf("%d %d", H, (M - 45));
		else
			printf("%d %d", (H - 1), (M + 60 - 45));
	else
		if (M >= 45)
			printf("%d %d", (H), (M - 45));
		else
			printf("%d %d", (H + 24 - 1), (M + 60 - 45));


	//�˶� �ð� 2
	int H, M;

	scanf_s("%d %d", &H, &M);
	early(H, M);
}

void early(int H, int M)
{
	if (H != 0)
		if (M >= 45)
			printf("%d %d", H, (M - 45));
		else
			printf("%d %d", (H - 1), (M + 60 - 45));
	else
		if (M >= 45)
			printf("%d %d", (H), (M - 45));
		else
			printf("%d %d", (H + 24 - 1), (M + 60 - 45));
}


//��и� ����

void main(void)
{
	int x, y;

	scanf_s("%d", &x);
	scanf_s("%d", &y);

	if ((x != 0) && (y != 0))
		if (x > 0)
			if (y > 0)
				printf("1");
			else
				printf("4");
		else
			if (y > 0)
				printf("2");
			else
				printf("3");
	else
		printf("��и鿡 ������ �ʽ��ϴ�.\n");
}


//����

void main(void)
{
	int year;

	scanf_s("%d", &year);

	if ((year % 4) == 0)
		if ((year % 100) == 0)
			if ((year % 400) == 0)
				printf("1");
			else
				printf("0");
		else
			printf("1");
	else
		printf("0");

}