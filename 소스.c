#include <stdio.h>

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




//power.c ȣ��

int power(int x, int y)
{
	int i;
	int result = 1;
	
	for (i = 0; i < y; i++)
	{
		result *= x;
	}

	return result;
}

int get_integer(void)
{
	int x;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &x);

	return x;
}

int main(void)
{
	int x, y;

	x = get_integer();
	y = get_integer();

	printf("%d�� %d���� %d�Դϴ�.", x, y, power(x, y));

	return 0;
}





long factorial(int n)
{
	int i;
	long result = 1;

	for (i = 1; i < n; i++)
		result *= i;

	return result;
}

int main()
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	printf("%d�� ���丮���� %d�Դϴ�.", n, factorial(n));


	return 0;
}





//combination.c
int get_integer(void)
{
	int x;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", x);

	return x;
}

int combination(int n, int r)
{

	return 0;
}


//����������
x = 1;
y = ++x;
//y=2, x=2

y = x++;
//y=2, x=3

y = --x;
//y=2, x=2

y = x-- ;
//y=2, x=1


//1. x++ = x + 1
//2. x++�� x���� ��� �� ���� ������Ŵ, ++x�� ������ ���� ���
//3. ��°��� 13, x = 11


//abbr.c
int main()
{
	int x = 10, y = 10, z = 33;

	x += 1;
	y *= 2;
	z %= 10 + 20;

	printf("x= %d y=%d z=%d\n", x, y, z);

	return 0;
}




int main(void)
{

	int x, y;

	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf_s("%d%d", &x, &y);

	printf("x == y�� �����: %d\n", x == y);
	printf("x != y�� �����: %d\n", x != y);
	printf("x > y�� �����: %d\n", x > y);
	printf("x < y�� �����: %d\n", x < y);
	printf("x >= y�� �����: %d\n", x >= y);
	printf("x <= y�� �����: %d\n", x <= y);

	return 0;
}


//1. (age >= 25) && (y_salary >= 3500)
//2. ��
//3. 0
//4. (++x < 5) || (3 < 2}

int main(void)
{
	int x, y;

	printf("ù ��° ��: ");
	scanf_s("%d", &x);
	printf("�� ��° ��: ");
	scanf_s("%d", &y);

	printf("ū �� = %d\n", (x > y) ? x : y);
	printf("���� �� = %d\n", (x < y) ? x : y);

	return 0;
}


int main(void)
{
	int x;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &x);

	(x % 2) ? printf("Ȧ���Դϴ�.") : printf("¦���Դϴ�.");


	return 0;
}
