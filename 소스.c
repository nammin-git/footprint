#include <stdio.h>

#define SIZE 10

//선택정렬
void main()
{
	int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };

	int i, j, temp, least;

	for (i = 0; i < SIZE - 1; i++) {
		least = i;

		for (j = i + 1; j < SIZE; j++) {
			if (list[j] < list[least])
				least = j;
		}
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
	for (i = 0; i < SIZE; i++)
		printf("%d ",list[i]);
	printf("\n");
}


//순차탐색
#define SIZE 10

void main()
{
	int key, i;
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9 };

	printf("탐색할 값을 입력하시오: ");
	scanf_s("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key)
			printf("탐색 성공 인덱스= %d\n", i);
	}

	printf("탐색 종료\n");
}


//이진탐색
#define SIZE 16

int binary_search(int list[], int n, int key);

void main()
{
	int key;
	int grade[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };

	printf("탐색할 값을 입력하시오: ");
	scanf_s("%d", &key);

	printf("탐색 결과= %d\n", binary_search(grade, SIZE, key));

}

int binary_search(int list[], int n, int key) {
	int low, high, middle;

	low = 0;
	high = n - 1;

	while (low <= high) {
		printf("[%d %d]\n", low, high);
		middle = (low + high) / 2;
		if (key == list[middle])
			return middle;
		else if (key > list[middle])
			low = middle + 1;
		else
			high = middle - 1;
	}
	return -1;
}


//이차원 배열
//5년간 10명의 학생의 성적을 저장
void main()
{
	int grade[5][10] = {
		{90,10,23,61,99,100,75,5,91,78},
		{12,70,80,90,54,65,3,0,80,79},
		{0,46,98,8,0,46,56,8,31,5},
		{86,84,6,24,79,84,32,54,89,78},
		{98,54,32,15,68,59,76,21,54,95}
	};

	for (int i = 0; i < 5; i++) {
		printf("%d년차 성적: ", i+1);
		for (int j = 0; j < 10; j++) {
			printf("%3d ", grade[i][j]);
		}
		printf("\n");
	}
}


//2차원 배열의 원소들의 합 구하기
//계산은 함수에서
#define YEARS 3
#define PRODUCTS 5

int sum(int list[][PRODUCTS]);

void main()
{
	int sales[YEARS][PRODUCTS] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int total_sale;

	total_sale = sum(sales);
	printf("총 매출은 %d원입니다.\n", total_sale);
}

int sum(int list[][PRODUCTS]) {
	int y, p;
	int total = 0;

	for (y = 0; y < YEARS; y++) {
		for (p = 0; p < PRODUCTS; p++) {
			total += list[y][p];
		}
	}
	return total;
}


//3개 학급의 평균 성적 구하기
#define CLASSES 3
#define STUDENTS 5

void main()
{
	//2차원 배열 정의
	int score[CLASSES][STUDENTS] = {
		{0,1,2,3,4},
		{10,11,12,13,14},
		{20,21,22,23,24}
	};
	
	int clas, student;
	int total = 0;
	int subtotal;

	for (clas = 0; clas < CLASSES; clas++) {
		subtotal = 0;
		for (student = 0; student < STUDENTS; student++) {
			subtotal += score[clas][student];
		}
		printf("학급 %d의 평균 성적 = %d\n", clas, subtotal / student);
		total += subtotal;
	}

	printf("--------------------------\n");
	printf("전체 학생들의 평균 = %d", total / (CLASSES * STUDENTS));

}