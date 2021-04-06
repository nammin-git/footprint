#include <stdio.h>

/*
//제곱 구하기
int square(int n)
{
	return (n * n);
}

int main(void)
{
	int n;

	printf("숫자를 입력하세요: ");
	scanf_s("%d", &n);
	
	printf("%d의 제곱은 %d입니다.", n, square(n));

	return 0;
}


//큰 수 구하기
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main(void)
{
	int x, y;

	printf("정수 두 개를 입력하세요: ");
	scanf_s("%d %d", &x, &y);
	
	printf("두 수 중 큰 수는 %d입니다.", get_max(x, y));

	return 0;
}
*/

void draw_rect(int side)
{
	int x, y;

	for (y = 0; y < side; y++)
	{
		for (x = 0; x < side; x++)
			printf("*");
		printf("\n");
	}
	return;
}

int main(void)
{
	int side;

	scanf_s("%d", &side);
	printf("", draw_rect(side));
}

