#include <stdio.h>

unsigned random_i();
double random_f();

long factorial(int n);

extern unsigned call_count;

void main()
{
	//������ �����ϴ� ���α׷�
	//random_i �Լ�
	register int i;

	for (i = 0; i < 10; i++)
		printf("%d ", random_i());

	printf("\n");

	for (i = 0; i < 10; i++) {
		printf("%f ", random_f());
	}

	printf("\n�Լ��� ȣ��� Ƚ��= %d \n", call_count);


	//��ȯ
	//���丮�� ��� ���α׷�
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	printf("%d!�� %d�Դϴ�.", n, factorial(n));
}

long factorial(int n) {
	printf("factorial(%d)\n", n);

	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}