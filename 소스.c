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

	printf("논리곱(AND) : b는 3보다 크고 10보다 작다 : %d\n", (b > 3) && (b < 10));
	printf("논리곱(AND) : b는 3보다 크고 5보다 작다 : %d\n", (b > 3) && (b < 5));
	printf("논리합(OR) : b는 5이거나 4다 : %d\n", (b == 5) || (b == 4));
	printf("논리합(OR) : b는 6이거나 7다 : %d\n\n", (b == 6) || (b ==7));



	int a, b;

	printf("a와 b의 값을 입력해주세요. ");
	scanf_s("%d %d", &a, &b);

	(a == b) ? printf("1") : printf("2");

	//AND는 어디에 사용하죠..? ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ


	printf("안녕하세요\n");
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

	printf("두 개의 숫자를 입력하시오: ");
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

	printf("계산할 사각형의 가로와 세로를 입력하세요: ");
	scanf_s("%f %f", &width, &height);

	printf("사각형의 넓이는 %f입니다.", sqr(width, height));


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

