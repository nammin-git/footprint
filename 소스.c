#include <stdio.h>

//�Ƕ�̵带 �׾ƶ�
//    *                         (1,5)7
//   ***                   (2,4)(2,5)(2,6)9
//  *****             (3,3)(3,4)(3,5)(3,6)(3,7)11
// *******       (4,2)(4,3)(4,4)(4,5)(4,6)(4,7)(4,8)13
//********* (5,1)(5,2)(5,3)(5,4)(5,5)(5,6)(5,7)(5,8)(5,9)

void main()
{
	int floor;
	
	printf("�� ������ �װڴ���? ");
	scanf_s("%d", &floor);

	int i, j;

	for (i = 1; i <= floor; i++) {
		for (j = 1; j < 2 * floor; j++) {
			if ((j < floor) && (i + j <= floor))
				printf(" ");
			else if ((j < floor) && (i + j > floor))
				printf("*");
			else if (j == floor)
				printf("*");
			else if ((j > floor) && (j - i < floor))
				printf("*");
			else if ((j > floor) && (j - i >= floor))
				printf(" ");
		}
		printf("\n");
	}
}


void main(void)
{
	int floor;

	printf("�� ������ �װڴ���? ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++)
			printf(" ");
		for (int k = 0; k < 2 * i + 1; k++)
			printf("*");
		printf("\n");
	}
}


//������ ź�ٰ� ����
//�л��� �Ϲ������� ���� (�Ϲ��� : 20�� �̻�)
void main()
{
	int age = 15;
	if (age >= 20)
		printf("�Ϲ����Դϴ�.\n");
	else
		printf("�л��Դϴ�.\n");

//�л��� �ʵ��л�(8~13) / ���л�(14~16) / ����л�(17~19)�� ������?
	if (age >= 8 && age <= 13) {
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age >= 14 && age <= 16) {
		printf("���л��Դϴ�.\n");
	}
	else if (age >= 17 && age <= 13) {
		printf("����л��Դϴ�.\n");
	}
	else
		printf("�л��� �ƴմϴ�.\n");
}

