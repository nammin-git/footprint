#include <stdio.h>

void main(void)
{
	//�ݺ��� �̿��� ���丮�� ���ϱ� 1
	int n, i;
	long fact=1;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
		fact *= i;
	
	printf("%d!�� %d�Դϴ�.\n", n, fact);


	//�ݺ��� �̿��� ���丮�� ���ϱ� 2
	int n, i = 1;
	long fact = 1;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	while (i <= n)
	{
		fact *= i;
		i++;
	}
	
	printf("%d!�� %d�Դϴ�.\n", n, fact);


	//�߰�����
	int i;
	for (i = 1; i < 5; i++)
		printf("%d ", 2 * i);
	for (i = 10; i > 0; i = i - 2)
		printf("Student%d\n", i);


	//��ø for���� �̿��Ͽ� *��ȣ�� �簢�� ������� ����ϴ� ���α׷� 1
	int x, y;

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 10; x++)
			printf("*");

		printf("\n");
	}


	//��ø for���� �̿��Ͽ� *��ȣ�� �簢�� ������� ����ϴ� ���α׷� 2
	int x, y;

	for (y = 0; y < 5; y++)
	{

}