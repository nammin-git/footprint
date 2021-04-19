#include <stdio.h>

//문제1. 학점 출력 프로그램

int main(void)
{
	int kor, eng, math, avg;

	printf("국어, 영어, 수학 점수를 입력해주세요:\n");
	scanf_s("%d %d %d", &kor, &eng, &math);

	avg = (kor + eng + math) / 3;

	if (avg >= 90)
		printf("A 학점");
	else if (avg >= 80)
		printf("B 학점");
	else if (avg >= 70)
		printf("C 학점");
	else
		printf("D 학점");

	return 0;
}


//문제2. 5의 판별 프로그램

int main(void)
{
	int x;

	printf("1부터 100까지의 정수를 입력하세요: ");
	scanf_s("%d", &x);

	if ((x > 100) || (x < 1))
		return 0;
	//exit()?
	else if ((x % 5) == 0)
		printf("%d는 5의 배수입니다.\n", x);
	else
		printf("%d는 5의 배수가 아닙니다.\n", x);

	return 0;
}


//문제3. 계산기 프로그램

int calculator(int x, int y)
{
	int z;

	switch (z)
		case x+y:
			printf("result : %d", x+y);
			break;
		case x-y:
			printf("result : %d", x-y);
			break;
		case x*y:
			printf("result : %d", x*y);
			break;
		case x/y:
			printf("result : %d", x/y);
			break;

//왜 굳이 switch-case 문을 써야하지...?
	return 0;
}


int main(void)
{
	int num1, num2, result;

	printf("연산식을 입력해주세요. (예시 : 2+3)\n");
	scanf_s("%d %d", &num1, &num2);

	result = calculator(num1, num2);

	return 0;
}

