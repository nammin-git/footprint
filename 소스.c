#include <stdio.h>

int main(void)
{
	//if���� ���ǽ��� ���� ���� ����
	int num = 5;

	if (num > 0)
		printf("����Դϴ�.\n");


	int temperature = 17;

	if (temperature < 0)
		printf("�����Դϴ�.\n");


	//if1.c ����Դϴ�
	int number;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &number);
	printf("�Էµ� ���� %d�Դϴ�.\n", number);

	if (number > 0)
		printf("����Դϴ�.\n");


	//if2.c ���밪 ���ϱ�



	return 0;
}