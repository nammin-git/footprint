#include <stdio.h>

//modify.c
#define SIZE 7

//�迭 ���ҵ��� ����
void square_array(int a[], int size);
//�迭 ���ҵ��� ȭ�鿡 ���
void print_array(int a[], int size);

void main()
{
	int list[SIZE] = { 1,2,3,4,5,6,7 };

	print_array(list, SIZE);
	square_array(list, SIZE);
	print_array(list, SIZE);	//������ ���� ��µ�

}

//�迭 ���� �����ϱ�
void square_array(int a[], int size) {
	for (int i = 0; i < size; i++) {
		a[i] = a[i] * a[i];
	}

}

//�迭 ���� �׳� ���
void print_array(int a[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%3d ", a[i]);
	}
	printf("\n");

}


#define SIZE 7

void square_array(int a[], int size);
void print_array(int a[], int size);

void main()
{
	int list[SIZE] = { 1,2,3,4,5,6,7 };

	print_array(list, SIZE);
	square_array(list, SIZE);

}

//�迭 ���� ������ ���� ȭ�鿡 ���
void square_array(int a[], int size) {
	for (int i = 0; i < size; i++) {
		a[i] = a[i] * a[i];
		printf("%3d ", a[i]);
	}
}

//�迭 ���� �׳� ���
void print_array(int a[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%3d ", a[i]);
	}
	printf("\n");
}
