#include <stdio.h>

//get_max.c
int get_max(int x, int y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

int main(void)
{
	int x, y;

	printf("���� �� ���� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);

	printf("%d", get_max(x, y));

	return 0;
}



//draw_star.c
void draw_star(int side)
{
	int x, y;

	for (y = 0; y < side; y++)
	{
		for(x = 0; x <side; x++)
			printf("*");
		printf("\n");

	}
		
	
}

int main(void)
{
	int side;

	printf("�簢���� �� ���� ����� ���� ���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &side);

	draw_star(side);

	return 0;
}


//power.c
int power(int x, int y)
{
	int i;
	long result =1;

	for (i = 0; i < y; i++)
	{
		result *= x;
	}
	return result;
}

int main(void)
{
	int x, y;

	printf("�ŵ������� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &x);
	printf("�ŵ������� Ƚ���� �Է��Ͻÿ�(������ �Է��Ͻÿ�): ");
	scanf_s("%d", &y);

	printf("%d", power(x, y));
	

	return 0;
}


//square.c ȣ��
int square(int n);

int main(void)
{
	int result;
	
	result = square(5);
	printf("%d \n", result);

	return 0;
}

int square(int n)
{
	return n * n;
}



//power.c ȣ��
int get_integer(void);
int power(int x, int y);

int main(void)
{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("%d�� %d���� %d�Դϴ�.\n", a, b, power(a, b));

	return 0;
}

int get_integer(void)
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	return n;
}

int power(int x, int y)
{
	int i;
	long result = 1;

	for(i = 0; i < y; i++)
	{
		result *= x;
	}


	return result;
}


//��Ģ���� ����
int sum(int x, int y)
{
	return (x + y);
}

int minus(int x, int y)
{
	return (x - y);
}

int mult(int x, int y)
{
	return (x * y);
}

int division(int x, int y)
{
	return (x / y);
}

int remain(int x, int y)
{
	return (x % y);
}

int main(void)
{
	int num1, num2;

	printf("���� �� ���� �Է��Ͻÿ�.(���� : 2 3)");
	scanf_s("%d %d", &num1, &num2);

	printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
	printf("%d - %d = %d\n", num1, num2, minus(num1, num2));
	printf("%d * %d = %d\n", num1, num2, mult(num1, num2));
	printf("%d / %d = %d\n", num1, num2, division(num1, num2));
	printf("%d %% %d = %d\n", num1, num2, remain(num1, num2));

	return 0;
}


//�л� ���� ��հ� �ջ� ����
int add(int kor, int eng, int math, int soc, int sci)
{
	int sum;

	sum = kor + eng + math + soc + sci;

	return sum;
}

int average(int sum)
{
	return (sum / 5);
}

int main(void)
{
	int kor, eng, math, soc, sci;

	printf("������ 5������ 0~100������ ���ڸ� �Է��ϼ���. \n");
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &kor);
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &eng);
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &math);
	printf("��ȸ ������ �Է��ϼ��� : ");
	scanf_s("%d", &soc);
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &sci);

	printf("5���� ������ �ջ��� %d�Դϴ�.\n", add(kor, eng, math, soc, sci));
	printf("5���� ������ ����� %d�Դϴ�.", average(add(kor, eng, math, soc, sci)));


	return 0;
}