#include <stdio.h>
#define SIZE 16

//2차원 배열
int main()
{
	int s[3][5];
	int i, j;
	int value = 0;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++)
			s[i][j] = value++;
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\n", s[i][j]);
	}

	return 0;
}


/*
//이진 탐색
int binary_search(int list[], int n, int key);

void main()
{
	int key;
	int grade[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };

	printf("탐색할 값을 입력하시오: ");
	scanf_s("%d", key);
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
}
*/


/*
void main()
{
	//선택 정렬
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
		printf("%d ", list[i]);
	printf("\n");


	//순차 탐색
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
*/