//��ǰ ��� ���� �ý���
#include <stdio.h>
#define ITEMS 10

void main()
{
	//��ǰ ��ȣ���� ��Ҹ� ����
	int a[ITEMS] = { 4,2,5,1,3,2,2,4,1,3 };

	//��ǰ ��ȣ �Է¹ޱ�
	int target;

	printf("��ǰ ��ȣ�� �Է����ּ���: ");
	scanf_s("%d", &target);

	printf("��ǰ %d���� %d������ �ֽ��ϴ�.\n", target, a[target - 1]);

}


