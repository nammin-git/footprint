#include <stdio.h>

long long sum(int* a, int n);//�� ��� ��...

long factorial(int N);

void main(void)
{
	//���� n���� ��
	//�о�


	//���丮��
	int N;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &N);

	printf("N! = %d", factorial(N));


}

long factorial(int N) {
	if (N == 1)
		return 1;
	else
		return factorial(N - 1);
}