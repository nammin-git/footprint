#include <stdio.h>

//그래프 만들기
#define STUDENT 7
void main()
{
	//점수 입력받기
	int grade[STUDENT] = { 0 };
	
	for (int i = 0; i < STUDENT; i++) {
		printf("학생 %d의 점수를 입력하시오: ", i + 1);
		scanf_s("%d", &grade[i]);
	}

	//그래프로 출력하기
	printf("\n그래프를 출력합니다.\n\n");
	for (int i = 0; i < STUDENT; i++) {
		printf("학생 %d: ", i + 1);
		for (int s = 0; s < grade[i]; s++) {
			printf("*");
		}
		printf("\n");
	}
}


//매개변수와 함수
#define STUDENTS 5

int get_average(int score[], int n);

void main(void)
{
	int grade[STUDENTS] = { 1,2,3,4,5 };
	int avg;

	avg = get_average(grade, STUDENTS);
	printf("평균은 %d입니다.\n", avg);
}

int get_average(int score[], int n) {
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += score[i];

	return sum / n;
}


#define SIZE 7

void square_array(int a[], int size);
void print_array(int a[], int size);

void main()
{
	int list[SIZE] = { 1,2,3,4,5,6,7 };

	print_array(list, SIZE);
	square_array(list, SIZE);
	print_array(list, SIZE);
}

void square_array(int a[], int size) {
	for (int i = 0; i < size; i++)
		a[i] = a[i] * a[i];
}

void printf_array(int a[], int size) {
	for (int i = 0; i < size; i++)
		printf("%3d ", a[i]);
}






