#include <stdio.h>

void main(void)
{
	//1. ������ �����
	int N;
	int i;

	scanf_s("%d", &N);

	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", N, i, N * i);
	}


	//3. 1���� n���� �� ���ϱ�
	int n, i, sum = 0;

	scanf_s("%d", &n);

	if ((n >= 1) && (n < 10000))
	{
		for (i = 0; i <= n; i++)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);


	//5. 1���� N���� �� �ٿ� �ϳ��� ����ϱ�
	int N, i;

	scanf_s("%d", &N);
	
	if ((N>0)&&(N<100000)){
		for (i = 1; i <= N; i++) {
			printf("%d\n", i);
		} 
	}
	

	//6. N���� 1���� �� �ٿ� �ϳ��� ����ϱ�
	int N, i;

	scanf_s("%d", &N);

	if ((N > 0) && (N < 100000)) {
		for (i = N; i >= 1; i--) {
			printf("%d\n", i);
		}
	}
}