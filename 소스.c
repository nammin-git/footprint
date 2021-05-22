#include <stdio.h>

long long sum(int* a, int n);//안 배운 거...

long factorial(int N);

long Fibonacci(int Fn);

void main(void)
{
	//정수 n개의 합
	//패쓰


	//팩토리얼
	int N;

	while (1) {
	printf("정수를 입력하시오: ");
	scanf_s("%d", &N);

	if ((N >= 0) && (N <= 12)) {
		printf("N! = %d\n", factorial(N));
		break;
	}
	else
		printf("0부터 12 사이의 정수를 입력해야 합니다.\n");
	}



	//피보나치 수
	int n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	printf("%d번째 피보나치 수는 %d입니다.\n", n, Fibonacci(n));

}

long factorial(int N) {
	if (N <= 1)
		return 1;
	else
		return N * factorial(N - 1);
}

long Fibonacci(int Fn) {
	if (Fn == 0)
		return 0;
	else if (Fn == 1)
		return 1;
	else
		return Fibonacci(Fn - 1) + Fibonacci(Fn - 2);

}