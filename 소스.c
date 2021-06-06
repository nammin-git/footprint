#include <stdio.h>
#include <stdlib.h>

//������ �˰���
//1���� �迭 ���� - 1

//�ִ� ���ϴ� �Լ�
int get_max(int* arr, int n);

//�ּڰ� ���ϴ� �Լ�
int get_min(int* arr, int n);

void main(void)
{
	//������ ���� �Է� �ޱ�
	int n;
	scanf_s("%d", &n);

	//�迭 �����
	//int arr[n];
	//���� �Ҵ��� ����ؾ� �� -> malloc �Լ� ���
	int* arr = (int*)malloc(sizeof(int) * n);
	*arr = { 0 };

	for (int i = 0; i < n; i++) {
		printf("�迭�� %d��° ���� �Է��Ͻÿ�: ", i + 1);
		scanf_s("%d", &arr[i]);
	}


	free(arr);

	printf("%d %d", get_min(arr, n), get_max(arr, n));
	

}

int get_min(int* arr, int n) {
	int min_value = arr[0];

	for (int i = 1; i < n; i++) {
		if (min_value > arr[i])
			min_value = arr[i];
	}

	return min_value;
}

int get_max(int* arr, int n) {
	int max_value = arr[0];

	for (int i = 1; i < n; i++) {
		if (max_value > arr[i])
			max_value = arr[i];
	}

	return max_value;
}


//1���� �迭 ���� - 2
#define SIZE 9

//�ִ밪�� ã�� �Լ�
void get_max(int* arr);

void main()
{
	//�迭 �����
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++) {
		if (scanf_s("%d", &arr[i]) > 100) {
			printf("100���� ���� �ڿ����� �Է��� �� �ֽ��ϴ�.\n");
			i--;
		}
		else
			continue;
	}

	printf("-----------\n");

	get_max(arr);

}

void get_max(int* arr) {
	int max_value = arr[0];

	int i, target = 0;
	for (i = 1; i < SIZE; i++) {
		if (max_value < arr[i]) {
			max_value = arr[i];
			target = i;
		}
	}

	printf("%d\n", max_value);
	printf("%d\n", target + 1);
}