#include <stdio.h>

long long sum(int* a, int n);//�� ��� ��...

long factorial(int N);

long Fibonacci(int Fn);

void main(void)
{
	//���� n���� ��
	//�о�


	//���丮��
	int N;

	while (1) {
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &N);

	if ((N >= 0) && (N <= 12)) {
		printf("N! = %d\n", factorial(N));
		break;
	}
	else
		printf("0���� 12 ������ ������ �Է��ؾ� �մϴ�.\n");
	}



	//�Ǻ���ġ ��
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	printf("%d��° �Ǻ���ġ ���� %d�Դϴ�.\n", n, Fibonacci(n));

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