//�������� *
#include <stdio.h>

void main()
{
	//int* p = 10000;

	//������ �����͸� ������ ��
	//������ �ּҿ� �������� ���� ���
	int i = 3000;
	int* p = NULL;

	p = &i;

	printf("���� ���� ����\n");
	printf("i = %d\n", i);
	printf("&i = %u\n", &i);

	printf("--------------\n");
	printf("�����͸� �̿��� ���� ����\n");
	printf("*p = %d\n", *p);
	printf("p = %u\n", p);

}

