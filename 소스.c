#include <stdio.h>
/*
//����1. ���� ��� ���α׷�

int main(void)
{
	int kor, eng, math, avg;

	printf("����, ����, ���� ������ �Է����ּ���:\n");
	scanf_s("%d %d %d", &kor, &eng, &math);

	avg = (kor + eng + math) / 3;

	if (avg >= 90)
		printf("A ����");
	else if (avg >= 80)
		printf("B ����");
	else if (avg >= 70)
		printf("C ����");
	else
		printf("D ����");

	return 0;
}

*/
//����2. 5�� �Ǻ� ���α׷�

int main(void)
{
	int x;

	printf("1���� 100������ ������ �Է��ϼ���: ");
	scanf_s("%d", &x);

	if ((x > 100) || (x < 1))
		break;
	else if ((x % 5) == 0)
		printf("%d�� 5�� ����Դϴ�.\n", x);
	else
		printf("%d�� 5�� ����� �ƴմϴ�.\n", x);

	return 0;
}