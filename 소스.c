//�Լ� ���� Ǯ��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//15596. ���� N���� ��

long long sum(int* a, int n);

void main()
{
	//���� �Է� �ޱ�
	int n;
	int* a;
	a = 0;

	printf("�迭 a�� ������ ������ ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	srand((unsigned)time(NULL));

	for (int i = 0; i < n; i++) {
		a[i] = rand() % 10000;
		if ((i % 10 == 0) && i != 0) {
			printf("%d ", a[i]);
			printf("\n");
		}
		else
			printf("%d ", a[i]);
	}

	printf("�迭 a ������ �� �� =  %d\n", sum(a, n));
}

long long sum(int* a, int n) {
	int result = 0;
	
	for (int i = 0; i < n; i++) {
		result += a[i];
	}

	return result;
}

