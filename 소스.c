#include <stdio.h>

void main(void)
{
	//Programming ����
	//1. ���� ���� ���� ���α׷�
	char ch;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%c", &ch, 1);

	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("�����Դϴ�.\n");
			break;
		default:
			printf("�����Դϴ�.\n");
			break;
	}


	//2. ù ��° ���� �� ��° ���� ������� �˷��ִ� ���α׷�
	int num1, num2;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num1);
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num2);

	if ((num1 % num2) == 0)
		printf("����Դϴ�.\n");
	else
		printf("����� �ƴմϴ�.\n");


	//3. ���� ���� ���� ã�Ƴ��� ���α׷�
	int num1, num2, num3;

	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	
	//else if ���
	if ((num1 < num2) && (num1 < num3))
		printf("���� ���� ������ %d�Դϴ�.", num1);
	else if ((num2 < num1) && (num2 < num3))
		printf("���� ���� ������ %d�Դϴ�.", num2);
	else
		printf("���� ���� ������ %d�Դϴ�.", num3);

	//if �� else �� ���
	if (num1 < num2)
		if (num1 < num3)
			printf("���� ���� ������ %d�Դϴ�.", num1);
		else
			printf("���� ���� ������ %d�Դϴ�.", num3);
	else
		if (num2 < num3)
			printf("���� ���� ������ %d�Դϴ�.", num2);
		else
			printf("���� ���� ������ %d�Դϴ�.", num3);


	//4. ���������� ����
	?


	//5. �ѷ��ڽ��Ϳ� Ÿ�� �˴ϱ�?
	int height, age;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf_s("%d", &height);
	printf("���̸� �Է��Ͻÿ�: ");
	scanf_s("%d", &age);

	if ((height >= 140) && (age >= 10))
		printf("Ÿ�� �����ϴ�.");
	else
		printf("Ż �� �����ϴ�.");
}