#include <stdio.h>
#include <stdlib.h>

//백준의 알고리즘
//1차원 배열 문제 - 1

//최댓값 구하는 함수
int get_max(int* arr, int n);

//최솟값 구하는 함수
int get_min(int* arr, int n);

void main(void)
{
	//정수의 개수 입력 받기
	int n;
	scanf_s("%d", &n);

	//배열 만들기
	//int arr[n];
	//동적 할당을 사용해야 함 -> malloc 함수 사용
	int* arr = (int*)malloc(sizeof(int) * n);
	*arr = { 0 };

	for (int i = 0; i < n; i++) {
		printf("배열의 %d번째 값을 입력하시오: ", i + 1);
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


//1차원 배열 문제 - 2
#define SIZE 9

//최대값을 찾는 함수
void get_max(int* arr);

void main()
{
	//배열 만들기
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++) {
		if (scanf_s("%d", &arr[i]) > 100) {
			printf("100보다 작은 자연수만 입력할 수 있습니다.\n");
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