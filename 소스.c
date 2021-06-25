#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
//배열 a를 배열 b로 복사하는 프로그램
#define SIZE 5

void array_copy(int a[], int b[], int size);

void main()
{
	int a[SIZE] = { 5,4,3,2,1 };
	int b[SIZE] = { 0 };

	printf("배열 a의 원소\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", a[i]);
	}
	printf("\n-------------\n");

	printf("배열 b의 원소\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", b[i]);
	}
	printf("\n-------------\n");

	printf("배열 a의 원소를 배열 b로 복사합니다.\n");
	array_copy(a, b, SIZE);

	printf("배열 b의 원소\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", b[i]);
	}
	printf("\n-------------\n");
}

void array_copy(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		b[i] = a[i];
	}
}
*/
/**/
//가장 많이 생성된 난수를 출력하는 프로그램
#define SIZE 100

int print_array(int a[], int size);
int get_max_count(int a[], int size);

void main()
{
	int array[SIZE] = { 0 };

	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; i++) {
		array[i] = rand() % 10;
	}

	print_array(array, SIZE);

	printf("\n-----------------------\n");
	
	printf("가장 많이 나온 수는 %d입니다.\n", get_max_count(array, SIZE));
}

int print_array(int a[], int size) {
	for (int i = 0; i < size; i++) {
		if ((i % 10 == 0) && (i != 0)) {
			printf("\n");
			printf("%d  ", a[i]);
		}
		else
			printf("%d  ", a[i]);
	}
}

int get_max_count(int a[], int size) {
	int count[SIZE] = { 0 };

	for (int i = 0; i < size; i++) {
		count[a[i]]++;
	}

	printf("숫자   나온 횟수\n");
	for (int j = 0; j < 10; j++) {
		printf("%3d	%6d\n", j, count[j]);
	}

	printf("-----------------------\n");

	int max_count=0;

	for (int k = 0; k < 10; k++) {
		if (count[k] > count[max_count])
			max_count = k;
	}

	printf("가장 많이 나온 횟수는 %d회 입니다.\n", count[max_count]);

	return max_count;
}
