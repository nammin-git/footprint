#include <stdio.h>

long long sum(int* a, int n);//안 배운 거...

long factorial(int N);

void main(void)
{
	//정수 n개의 합
	//패쓰


	//팩토리얼
	int N;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &N);

	printf("N! = %d", factorial(N));


}

long factorial(int N) {
	if (N == 1)
		return 1;
	else
		return factorial(N - 1);
}