#include <stdio.h>
/*
int leapyear(int year);

int main(void)
{
	//if���� ���ǽ��� ���� ���� ����
	int num = 5;

	if (num > 0)
		printf("����Դϴ�.\n");


	int temperature = 17;

	if (temperature < 0)
		printf("�����Դϴ�.\n");


	//if1.c ����Դϴ�
	int number;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &number);
	printf("�Էµ� ���� %d�Դϴ�.\n", number);

	if (number > 0)
		printf("����Դϴ�.\n");


	//if2.c ���밪 ���ϱ�
	int num_absolute;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num_absolute);

	if (num_absolute < 0)
		num_absolute = -num_absolute;


	printf("���밪�� %d�Դϴ�.\n", num_absolute);


	//���չ�
	int score;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &score);

	if (score >= 90)
	{
		printf("�հ��Դϴ�.\n");
		printf("���бݵ� ���� �� �ֽ��ϴ�.\n");
	}
	else
	{
		printf("���հ��Դϴ�,\n");
		printf("���бݵ� ���� �� �����ϴ�.\n");
	}


	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &score);

	if (score >= 60)
	{ 
		printf("�հ��Դϴ�.\n");
		printf("���бݵ� ���� �� �ֽ��ϴ�.\n");
	}
	else
		printf("���հ��Դϴ�.\n");
		printf("���бݵ� ���� �� �����ϴ�.\n");


	//�μ��ۿ�(side effect)
	int line_count = 0;

	if (++line_count > 20)
	{
		printf("\n");
		line_count = 0;
	}


	//if_else1.c Ȧ¦ �Ǻ� ���α׷�
	int number;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &number);

	if (number % 2 == 0)
		printf("%d�� ¦���Դϴ�,\n", number);
	else
		printf("%d�� Ȧ���Դϴ�,\n", number);


	//if_else2.c ������
	int n, d, result;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	printf("�и� �Է��Ͻÿ�: ");
	scanf_s("%d", &d);

	if (d == 0)
		printf("0���� ���� �� �����ϴ�.\n");
	else
	{
		result = n / d;
		printf("%d ������ %d�� %d�Դϴ�.\n", n, d, result);
	}


	//leap_year.c
	int year;
	int result;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &year);

	result = leapyear(year);
	
	if (result == 0)
		printf("%d�� ������ �ƴմϴ�.\n", year);
	else
		printf("%d�� �����Դϴ�.\n", year);
	

	//large_small
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	if (n >= 100)
		printf("%d�� 100���� ũ�ų� �����ϴ�.\n", n);
	else
		printf("%d�� 100���� �۽��ϴ�.\n", n);



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
	//���� if��
	int score;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &score);

	if (score >= 80)
		if (score >= 90)
			printf("A �����Դϴ�.\n");
		else
			printf("B �����Դϴ�.\n");
	else
		printf("C�����Դϴ�.\n");

	if (score >= 80)
	{
		if (score >= 90)
			printf("A �����Դϴ�.\n");
		else
			printf("B �����Դϴ�.\n");
	}
	else
		printf("A�����̳� B������ �ƴմϴ�.\n");


	//������ �Է¹޾� ������ �����ϴ� ���α׷�
	int score;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &score);

	if (score >= 90)
	{
		printf("A�����Դϴ�,\n");
		printf("���б��� ���� �� �ֽ��ϴ�.\n");
	}
	else if (score >= 80)
		printf("B�����Դϴ�,\n");
	else if (score >= 70)
		printf("C�����Դϴ�,\n");
	else if (score >= 60)
		printf("D�����Դϴ�,\n");
	else
		printf("F�����Դϴ�.\n");


	//���ڵ��� �з��ϴ� ���α׷�
	char ch;

	printf("���� ���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%c", &ch);
	//�� ��� ����?

	if (ch >= 'A' && ch <= 'Z')
		printf("%c�� �빮���Դϴ�.", ch);
	else if (ch >= 'a' && ch <= 'z')
		printf("%c�� �ҹ����Դϴ�.", ch);
	else if (ch >= '0' && ch <= '9')
		printf("%c�� �����Դϴ�.", ch);
	else
		printf("���ڵ� ���ڵ� �ƴմϴ�.");


	//����������
	int a, b, c;
	float dis, sol1, sol2;

	printf("��� a�� �Է��Ͻÿ�: ");
	scanf_s("%d", &a);

	printf("��� b�� �Է��Ͻÿ�: ");
	scanf_s("%d", &b);

	printf("��� c�� �Է��Ͻÿ�: ");
	scanf_s("%d", &c);

	if (a == 0)
	{
		sol1 = sol2 = -(c / b);
		printf("�������� ���� %d�Դϴ�.", sol1);
	}
	else if ((b * b - 4 * a * c) > 0)
		printf("�Ǳ��� �������� �ʽ��ϴ�.");
	else
		sol1=-b+


	return 0;
}