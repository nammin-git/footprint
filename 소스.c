#include <stdio.h>

void main(void)
{
	//11. X���� ���� �� ����ϱ�
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
	//��� �� ����...?


	//for���� �̿��Ͽ� meter�� mile�� �ٲٱ�
	int meter, mile;

	for (mile = 0; mile <= 2; mile++)
	{
		meter = 1609 * mile;
		printf("%d������ %d�����Դϴ�.\n", mile, meter);
	}

	//while���� �̿��Ͽ� meter�� mile�� �ٲٱ�
	int i = 0;

	while (i < 3)
	{
		meter = i * 1609;
		printf("%d������ %d�����Դϴ�.\n", i, meter);
		i++;
	}


	//while���� �̿��Ͽ� ������ ����ϱ�
	int n;
	int i = 1;

	printf("����ϰ� ���� ��: ");
	scanf_s("%d", &n);

	while (i <= 9)
	{
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}


	//while���� �̿��� ������ ��� ���α׷�
	int n;
	
	printf("==============================\n");
	printf("    n             n�� ����\n");
	printf("==============================\n");

	n = 1;
	while (n <= 10)
	{
		printf("%5d          %5d\n", n, n * n);
		n++;
	}


	//while���� ����Ͽ� 1���� n������ �� ����ϱ�
	int n, i, sum;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	i = 1;
	sum = 0;
	while (i <= n)
	{
		sum += i;
		i++;
	}

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);


	//while���� �̿��Ͽ� 1~n ������ ¦������ �� ���ϱ�
	int n, sum, i;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);


	i = 0;
	sum = 0;
	while (i <= n)
	{
		sum += i;
		i = i + 2;
	}

	printf("1���� %d������ ¦������ ���� %d�Դϴ�.\n", n, sum);

	//���� if���� �����
	i = 1;
	sum = 0;
	while (i <= n)
	{
		if (i % 2 == 0)
			sum += i;
		i++;
	}

	printf("1���� %d������ ¦������ ���� %d�Դϴ�.\n", n, sum);

}