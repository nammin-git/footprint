#include <stdio.h>
/*
//�ݺ��� ���� 1
//�Է°��� 1���� n���� ���� ������ Ŭ ��, n�� ã�� ���α׷�

int sum(int num);

void main(void)
{

	int num;

	printf("���� �Է����ּ���: ");
	scanf_s("%d", &num);
	
	printf("�Է��� ������ ���� �� ���� %d�̰� 1~%d��°���� ���� ���̴�.\n", num + sum(num), sum(num));
}
//1-1. for �ݺ���
int sum(int num)
{
	int i, result = 0;

	for (i = 1; ; i++) {
		result += i;
		if (result > num)
			break; //break�ϸ� ++�� �� �Ǵ� �ǰ�?
	}
	
	return i;
}

//1-2. while �ݺ���
int sum(int num)
{
	int i = 0 , result = 0;

	while (1) {
		result += i;
		if (result <= num)
			i++;
		else
			break;
	}

	return i;
}
*/

//�ݺ��� ���� 2
//1���� �Է°����� ������ �������� ���
//3�� 5�� ������� "n"���� ���

int Common_multiple(int n);

void main(void)
{
	int n;

	printf("���� �Է����ּ���: ");
	scanf_s("%d", &n);

	Common_multiple(n);
}

int Common_multiple(int n)
{
	int i;

	for (i = n; n > 0; n--) {
		printf("%d ", n);
		if (n % 10 == 1)
			printf("\n");
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("\"%d\" ", n);
	}
	return;
}
