#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//날짜 출력하기
#define MONTH 12

void main()
{
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	for (int i = 0; i < MONTH; i++) {
		printf("%d월은 %d일까지 있습니다.\n", i+1, days[i]);
	}
}


//최대값과 최소값을 출력하는 프로그램
//배열에는 난수 발생시켜 저장
#define SIZE 10

int get_max(int a[], int n);
int get_min(int a[], int n);

void main(void)
{
	int array[SIZE];

	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; i++) {
		array[i] = rand() % 30000;
		printf("%d ", array[i]);
	}

	printf("\n");

	printf("최대값은 %d, 최소값은 %d입니다.\n", get_max(array, SIZE), get_min(array, SIZE));
}

int get_max(int a[], int n) {
	int max = 0;

	for (int i = 0; i < n; i++) {
		if (a[max] < a[i]) {
			max = i;
		}
	}

	return a[max];
}

int get_min(int a[], int n) {
	int min = 0;

	for (int i = 0; i < n; i++) {
		if (a[min] > a[i]) {
			min = i;
		}
	}

	return a[min];
}


//배열 원소가 같은지 검사하는 프로그램
#define SIZE 10

int array_equal(int a[], int b[], int size);

void main()
{
	int a[SIZE] = { 0,1,2,3,4,5,6,7,8,9 };
	int b[SIZE] = { 0,2,4,6,8,10,12,14,16,18 };

	if(array_equal(a, b, SIZE)==1)
		printf("두 배열의 전체 원소가 동일합니다.\n");
	else
		printf("서로 다른 배열입니다.\n");
}

int array_equal(int a[], int b[], int size) {
	int tmp = 0;

	for (int i = 0; i < size; i++) {
		if (a[i] == b[i])
			tmp++;
		else
			return 0;
	}

	if (tmp == size)
		return 1;
}
