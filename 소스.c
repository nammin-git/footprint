#include <stdio.h>

void main(void)
{
	//���� �簢�� �����
	int side, i;
	int j;

	printf("�� ���� ���� �� ���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &side);

	//���� �� �簢��	
	
	printf("**************\n");
	for (i = 0; i < side; i++)
		printf("*            *\n");
	printf("**************\n");

	//���� �� �簢��              
	for (i = 0; i < side; i++)
	{
		printf("*");
		for (j = 0; j < side; j++)
			printf("\n*");
	}
	//����
}