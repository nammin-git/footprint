#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void func();

void main(void)
{
	//�迭�� ���� �ʱ�ȭ�ϰ� ����ϴ� ���α׷�
	int arr[3] = { 1,2,3 };
	for (int i = 0; i < 3; i++)
		printf("%d\n", arr[i]);


	//�迭�� ���� �����ϰ� ����ϴ� ���α׷�
	int arr[3];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	for (int i = 0; i < 3; i++)
		printf("%d\n", arr[i]);


	//�迭�� ������ ���Խ�Ű�� ���α׷�
	int i;
	int grade[SIZE];

	for (i = 0; i < SIZE; i++)
		grade[i] = rand() % 100;

	for (i = 0; i < SIZE; i++)
		printf("grade[%d]=%d\n", i, grade[i]);


	//a[6]�� ���� �ʱ�ȭ
	int a[] = { 1,2,3,4,5,6 };


	//������ ����ϱ�
	int table;

	printf("����� ���� �Է����ּ���: ");
	scanf_s("%d", &table);

	func(table);


	//��ȭ�� �¼� ���� �ý���
	char yes_no;

	//�迭�� ����
	int seat[10] = { 0 };


	//�ݺ� ����
	while (1) {
	printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n): ");
	scanf_s(" %c", &yes_no, 1);

	//���� �� �� ��
	if (yes_no == 'n')
		break;
	//������ ��
	else if (yes_no == 'y') {
		printf("1 2 3 4 5 6 7 8 9\n");
		printf("-----------------------\n");

		//���� �¼� ����
		for (int i = 0; i < 10; i++)
			printf(" %d", seat[i]);
		printf("\n");

		//�¼� �����ϱ�
		int seat_number;
		printf("�� ��° �¼��� �����Ͻðڽ��ϱ�? ");
		scanf_s("%d", &seat_number);

		//���� �� �� �¼��� ���� ������ �� �ֵ���
		if (seat[seat_number - 1] != 0) {
			seat[seat_number - 1] = 1;
			printf("����Ǿ����ϴ�.\n");
			printf("======================\n");
			printf("\n");
		}
		else {
			printf("�̹� ����� �¼��Դϴ�.\n");
			printf("======================\n");
			printf("\n");
		}
	}
	}
}

void func(int table) {
	int arr[9];

	int i;
	for (i = 0; i < 9; i++)
		arr[i] = (i + 1) * table;

	for (i = 0; i < 9; i++)
		printf("arr[%d] = %d\n", i, arr[i]);


}

