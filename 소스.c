#include <stdio.h>

//modify.c
#define SIZE 7

//배열 원소들을 제곱
void square_array(int a[], int size);
//배열 원소들을 화면에 출력
void print_array(int a[], int size);

void main()
{
	int list[SIZE] = { 1,2,3,4,5,6,7 };

	print_array(list, SIZE);
	square_array(list, SIZE);
	print_array(list, SIZE);	//제곱한 값이 출력됨

}

//배열 원소 제곱하기
void square_array(int a[], int size) {
	for (int i = 0; i < size; i++) {
		a[i] = a[i] * a[i];
	}

}

//배열 원소 그냥 출력
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

//배열 원소 제곱한 값을 화면에 출력
void square_array(int a[], int size) {
	for (int i = 0; i < size; i++) {
		a[i] = a[i] * a[i];
		printf("%3d ", a[i]);
	}
}

//배열 원소 그냥 출력
void print_array(int a[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%3d ", a[i]);
	}
	printf("\n");
}
