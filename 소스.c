#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	//���������� ����
	int a;
	int b = (rand() % 100);

	printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��) ");
	scanf_s("%d", &a);

	if (a == b)
		printf("�����\n");
	else if (a - b == 1)
		printf("����ڰ� �̱�\n");
	else if (a - b == -1)
		printf("��ǻ�Ͱ� �̱�\n");
	else if (a - b == 2)
		printf("��ǻ�Ͱ� �̱�\n");
	else if (a - b == -2)
		printf("����ڰ� �̱�\n");
	else
		printf("�˸��� ���ڸ� �Է��Ͻÿ�.\n");
	exit(0);
	//****************������ �߻��� �� �Ǿ� ����


	//for������ Hello World ����
	int i;

	for (i = 0; i < 10; i++)
		printf("Hello World\n");


	//for���� ����Ͽ� 1���� 10������ ������ ���ϱ�
	int i, sum = 0;

	for (i = 1; i <= 10; i++) {
		sum += i;
	}

	printf("1���� 10������ ������ %d�Դϴ�.\n", sum);


	//for���� ����Ͽ� �������� �����ϴ� ���α׷�
	int n, i, pn;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	printf("==================================\n");
	printf("     n              n�� ������       \n");
	printf("==================================\n");

	for (i = 1; i <= n; i++) {
		pn = i * i * i;
		printf("%6d", i);
		printf("%20d\n", pn);
	}
	//���� �ּ�ȭ
	for (i = 1; i <= n; i++) {
		printf("%6d              %6d\n", i, i * i * i);
	}

}