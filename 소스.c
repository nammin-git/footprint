#include <stdio.h>

unsigned random_i();
double random_f();

long factorial(int n);

extern unsigned call_count;

void main()
{
	//난수를 생성하는 프로그램
	//random_i 함수
	register int i;

	for (i = 0; i < 10; i++)
		printf("%d ", random_i());

	printf("\n");

	for (i = 0; i < 10; i++) {
		printf("%f ", random_f());
	}

	printf("\n함수가 호출된 횟수= %d \n", call_count);


	//순환
	//팩토리얼 계산 프로그램
	int n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	printf("%d!은 %d입니다.", n, factorial(n));
}

long factorial(int n) {
	printf("factorial(%d)\n", n);

	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}