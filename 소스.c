#include <stdio.h>

int main(void)
{
	/*
	int kor, eng, math, avg;

	printf("����, ����, ���� ������ �Է����ּ���.\n");
	scanf_s("%d %d %d", &kor, &eng, &math);

	avg = (kor + eng + math) / 3;

	if (abg >= 90)
		printf("A");
	if elst()


	int i;
	printf("������ �Է��ϼ���:");
	scanf_s("%d", &i);

	if (i == 7)
		printf("7�� �Է��߽��ϴ�.\n\n");


	int a = 30;

	if (a > 50)
		printf("50���� ū �� �Դϴ�.\n");
	else if (a == 50)
		printf("50�Դϴ�.\n");
	else
		printf("50���� ���� �� �Դϴ�.\n");

*/
	int i;
	
	printf("���� �Է����ּ���: ");
	scanf_s("%d", &i);

	switch (i) {
	case 0:
		printf("�Է��� ���� 0�Դϴ�.\n");
		break;
	case 1:
		printf("1�� �Է��߽��ϴ�.\n");
		break;
	default:
		printf("0, 1�� �ƴ� �ٸ� �� �Դϴ�.\n");
		break;

	}



	return 0;
}