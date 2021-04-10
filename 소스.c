#include <stdio.h>

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




//power.c 호출

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

	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);

	return x;
}

int main(void)
{
	int x, y;

	x = get_integer();
	y = get_integer();

	printf("%d의 %d승은 %d입니다.", x, y, power(x, y));

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

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	printf("%d의 팩토리얼은 %d입니다.", n, factorial(n));


	return 0;
}





//combination.c
int get_integer(void)
{
	int x;

	printf("정수를 입력하시오: ");
	scanf_s("%d", x);

	return x;
}

int combination(int n, int r)
{

	return 0;
}


//증감연산자
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
//2. x++는 x값을 출력 후 값을 증가시킴, ++x는 증가된 값을 출력
//3. 출력값은 13, x = 11


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

	printf("두개의 정수를 입력하시오: ");
	scanf_s("%d%d", &x, &y);

	printf("x == y의 결과값: %d\n", x == y);
	printf("x != y의 결과값: %d\n", x != y);
	printf("x > y의 결과값: %d\n", x > y);
	printf("x < y의 결과값: %d\n", x < y);
	printf("x >= y의 결과값: %d\n", x >= y);
	printf("x <= y의 결과값: %d\n", x <= y);

	return 0;
}


//1. (age >= 25) && (y_salary >= 3500)
//2. 참
//3. 0
//4. (++x < 5) || (3 < 2}

int main(void)
{
	int x, y;

	printf("첫 번째 수: ");
	scanf_s("%d", &x);
	printf("두 번째 수: ");
	scanf_s("%d", &y);

	printf("큰 수 = %d\n", (x > y) ? x : y);
	printf("작은 수 = %d\n", (x < y) ? x : y);

	return 0;
}


int main(void)
{
	int x;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);

	(x % 2) ? printf("홀수입니다.") : printf("짝수입니다.");


	return 0;
}
