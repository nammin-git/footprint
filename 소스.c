#include <stdio.h>

void hello(void)
{
	printf("HELLO!\n");

}

void printNum(int x)
{
	printf("Num : %d\n", x);
	return;
}

int getQuantity(void)
{
	int qty;
	printf("Enter Quantity : ");
	scanf_s("%d", &qty);
	return qty;
}

int sqr(int x)
{
	return x * x;
}



int main(void)
{
	
	int a;

	scanf_s("%d\n\n", &a);

	(a > 5) ? printf("1") : printf("2");


	int b = 5;

	printf("����(AND) : b�� 3���� ũ�� 10���� �۴� : %d\n", (b > 3) && (b < 10));
	printf("����(AND) : b�� 3���� ũ�� 5���� �۴� : %d\n", (b > 3) && (b < 5));
	printf("����(OR) : b�� 5�̰ų� 4�� : %d\n", (b == 5) || (b == 4));
	printf("����(OR) : b�� 6�̰ų� 7�� : %d\n\n", (b == 6) || (b ==7));



	int a, b;

	printf("a�� b�� ���� �Է����ּ���. ");
	scanf_s("%d %d", &a, &b);

	(a == b) ? printf("1") : printf("2");

	//AND�� ��� �������..? �ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�


	printf("�ȳ��ϼ���\n");
	hello();


	int a = 5;
	printNum(a);


	int amt;
	amt = getQuantity();

	printf("amt : %d\n", amt);


	int b, c;

	scanf_s("%d", &b);
	c = sqr(b);
	printf("input : %d\nsquared : %d \n", b, c);


	return 0;
}


int add(int num1, int num2)
{
	return num1 + num2;
}


int main(void)
{
	int num1, num2;

	printf("�� ���� ���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &num1, &num2);

	printf("result = %d", add(num1, num2));

	return 0;
}


float sqr(float a, float b)
{
	return a * b;
}

int main(void)
{
	float width, height;

	printf("����� �簢���� ���ο� ���θ� �Է��ϼ���: ");
	scanf_s("%f %f", &width, &height);

	printf("�簢���� ���̴� %f�Դϴ�.", sqr(width, height));


	return 0;
}


int main(void)
{

	int i = -3, j = 2, k = 0, m;
	m = ++i && ++j && ++k;

	printf("%d, %d, %d, %d\n", i, j, k, m);


	int x = 4, y, z;
	y = --x;
	z = x--;
	printf("%d, %d, %d\n", x, y, z);


	printf("%x\n", 0x20 << 2);

	return 0;
}

