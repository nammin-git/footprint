#include <stdio.h>

//2차원 표를 배열로 작성하기
#define ROWS 3
#define COLS 5

void main()
{
	//배열 초기화
	int array[ROWS][COLS] = {
		{12,56,32,16,98},
		{99,56,34,41,3},
		{65,3,87,78,21}
	};
	
	//배열 출력
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%3d ", array[i][j]);
		}
		printf("\n");
	}

	printf("=============\n");

	//행의 합계
	int sum = 0;

	for (int i = 0; i < ROWS; i++) {
		for (int col = 0; col < COLS; col++) {
			sum += array[i][col];
		}
		printf("%d행의 합계= %d\n", i, sum);
		sum = 0;
	}

	printf("=============\n");

	//열의 합계
	for (int j = 0; j < COLS; j++) {
		for (int row = 0; row < ROWS; row++) {
			sum += array[row][j];
		}
		printf("%d열의 합계= %d\n", j, sum);
		sum = 0;
	}

}
