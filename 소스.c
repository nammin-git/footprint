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

	printf("정수 두 개를 입력하시오: ");
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

	printf("사각형의 한 변을 만들기 위한 별의 갯수를 입력하시오: ");
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

	printf("거듭제곱할 수를 입력하시오: ");
	scanf_s("%d", &x);
	printf("거듭제곱할 횟수를 입력하시오(지수를 입력하시오): ");
	scanf_s("%d", &y);

	printf("%d", power(x, y));
	

	return 0;
}


//square.c 호출
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



//power.c 호출
int get_integer(void);
int power(int x, int y);

int main(void)
{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("%d의 %d승은 %d입니다.\n", a, b, power(a, b));

	return 0;
}

int get_integer(void)
{
	int n;

	printf("정수를 입력하시오: ");
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


//사칙연산 계산기
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

	printf("숫자 두 개를 입력하시오.(예시 : 2 3)");
	scanf_s("%d %d", &num1, &num2);

	printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
	printf("%d - %d = %d\n", num1, num2, minus(num1, num2));
	printf("%d * %d = %d\n", num1, num2, mult(num1, num2));
	printf("%d / %d = %d\n", num1, num2, division(num1, num2));
	printf("%d %% %d = %d\n", num1, num2, remain(num1, num2));

	return 0;
}


//학생 성적 평균과 합산 계산기
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

	printf("성적은 5단위로 0~100까지의 숫자를 입력하세요. \n");
	printf("국어 성적을 입력하세요 : ");
	scanf_s("%d", &kor);
	printf("영어 성적을 입력하세요 : ");
	scanf_s("%d", &eng);
	printf("수학 성적을 입력하세요 : ");
	scanf_s("%d", &math);
	printf("사회 성적을 입력하세요 : ");
	scanf_s("%d", &soc);
	printf("과학 성적을 입력하세요 : ");
	scanf_s("%d", &sci);

	printf("5과목 성적의 합산은 %d입니다.\n", add(kor, eng, math, soc, sci));
	printf("5과목 성적의 평균은 %d입니다.", average(add(kor, eng, math, soc, sci)));


	return 0;
}