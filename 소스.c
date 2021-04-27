#include <stdio.h>

void main(void)
{
	//11. X보다 작은 수 출력하기
	int N, X, x, i;

	scanf_s("%d %d", &N, &X);

	if (((N >= 1) && (N <= 10000)) && ((X >= 1) && (X <= 10000)))
	{
		for (i = 1; i <= N; i++)
		{
			scanf_s("%d", &x);

			if (X > x)
				printf("%d ", x);
		}
	}
	//어떻게 된 거지...?


	//for문을 이용하여 meter를 mile로 바꾸기
	int meter, mile;

	for (mile = 0; mile <= 2; mile++)
	{
		meter = 1609 * mile;
		printf("%d마일은 %d미터입니다.\n", mile, meter);
	}

	//while문을 이용하여 meter를 mile로 바꾸기
	int i = 0;

	while (i < 3)
	{
		meter = i * 1609;
		printf("%d마일은 %d미터입니다.\n", i, meter);
		i++;
	}


	//while문을 이용하여 구구단 출력하기
	int n;
	int i = 1;

	printf("출력하고 싶은 단: ");
	scanf_s("%d", &n);

	while (i <= 9)
	{
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}


	//while문을 이용한 제곱값 출력 프로그램
	int n;
	
	printf("==============================\n");
	printf("    n             n의 제곱\n");
	printf("==============================\n");

	n = 1;
	while (n <= 10)
	{
		printf("%5d          %5d\n", n, n * n);
		n++;
	}


	//while문을 사용하여 1부터 n까지의 합 계산하기
	int n, i, sum;

	printf("정수를 입력하시요: ");
	scanf_s("%d", &n);

	i = 1;
	sum = 0;
	while (i <= n)
	{
		sum += i;
		i++;
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);


	//while문을 이용하여 1~n 사이의 짝수들의 합 구하기
	int n, sum, i;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);


	i = 0;
	sum = 0;
	while (i <= n)
	{
		sum += i;
		i = i + 2;
	}

	printf("1부터 %d까지의 짝수들의 합은 %d입니다.\n", n, sum);

	//나는 if문을 사용함
	i = 1;
	sum = 0;
	while (i <= n)
	{
		if (i % 2 == 0)
			sum += i;
		i++;
	}

	printf("1부터 %d까지의 짝수들의 합은 %d입니다.\n", n, sum);

}