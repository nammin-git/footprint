#include <stdio.h>
#include <limits.h>

void main(void)
{
	//5개의 입력값을 더하는 함수
	int n;
	int result = 0;
	int i = 1;

	while (i <= 5)
	{
		printf("값을 입력하시오: ");
		scanf_s("%d", &n);
		result += n;
		i++;
	}

	printf("합계는 %d입니다.\n", result);


	//센티널을 사용하여 성적의 평균을 구하는 프로그램
	int scr = 0, cnt = 0;
	float sum = 0, avg;

	printf("종료하려면 음수를 입력하시오.\n");

	while (scr >= 0)
	{
		printf("성적을 입력하시오: ");
		scanf_s("%d", &scr);

		sum += scr;
		cnt++;
	}

	sum = sum - scr;
	cnt--;

	avg = sum / cnt;
	printf("%d명의 학생의 성적의 평균값은 %f입니다.\n", cnt, avg);


	//while문을 사용하여 최소값 찾는 프로그램
	int n, min_value = INT_MAX;

	printf("정수를 입력하시오.\n종료는 Ctrl+z\n");

	while ((scanf_s("%d", &n)) != EOF)
	{
		if (n < min_value)
			min_value = n;
	}

	printf("최소값은 %d입니다.\n", min_value);


	//최대공약수 찾기
	int num1, num2, x, y, r;

	printf("두 수를 입력하시오: ");
	scanf_s("%d %d", &num1, &num2);

	(num1 > num2) ? ((x = num1) && (y = num2)) : ((x = num2) && (y = num1));

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("%d와 %d의 최대공약수는 %d입니다.\n", num1, num2, x);
}