#include <stdio.h>

void Swap(int a, int b);
void Swap_addr(int a, int b);

void main()
{/*
	int arr[3]={5,10,15};

	//*& �� �ƹ� �͵� ���� �Ͱ� ����
	//&�� �ּ�, *�� �ּ��� ��
	printf("arr[0] �� ���� �� : %d\n", &*&*&*&*&*&*arr[0]);
	printf("arr[0] �� ���� �� : %d\n", arr[0]);
*/

	//SWAP
	//a�� b�� ���� �ٲ۴�
	//���� ���� ���� (Call by Value) -> ���� ������
	int a = 10;
	int b = 20;

	printf("a �� �ּ� : %d\n", &a, 1);
	printf("b �� �ּ� : %d\n", &b, 1);

	printf("\n\n ... Swap �Լ� �� ...\n");
	printf("a : %d, b : %d\n", a, b);

	Swap(a, b);

	printf("\n\n ... Swap �Լ� �� ...\n");
	printf("a : %d, b : %d\n", a, b);

	//�ּҰ��� �ѱ��?

	

}

void Swap(int a, int b) {

	printf("Swap �Լ� �� a �� �ּ� : %d\n", &a, 1);
	printf("Swap �Լ� �� b �� �ּ� : %d\n", &b, 1);

	int temp = a;
	a = b;
	b = temp;

	printf("\n\n ... Swap �Լ� �� ...\n");
	printf("a : %d, b : %d\n", a, b);

}

