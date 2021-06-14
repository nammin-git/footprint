//배열 문제
#include <stdio.h>

//문제 5. 시험 점수를 표로 출력하기
void main()
{
	int score[5][5] = { 0 };

	//철수의 점수 입력받기
	printf("철수의 점수 입력\n");
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &score[0][i]);
	}

	//철희의 점수 입력받기
	printf("철희의 점수 입력\n");
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &score[1][i]);
	}

	//영수의 점수 입력받기
	printf("영수의 점수 입력\n");
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &score[2][i]);
	}

	//철희의 점수 입력받기
	printf("철희의 점수 입력\n");
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &score[3][i]);
	}


	//과목별 총점 계산하기
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			score[4][i] += score[j][i];
		}
	}

	//개인 총점 계산하기
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			score[i][4] += score[i][j];
		}
	}


	//점수 출력하기
	printf("철수 : %d, %d, %d, %d 개인 총점 : %d\n", score[0][0], score[0][1], score[0][2], score[0][3], score[0][4]);
	printf("---------------------------------------\n");
	printf("철희 : %d, %d, %d, %d 개인 총점 : %d\n", score[1][0], score[1][1], score[1][2], score[1][3], score[1][4]);
	printf("---------------------------------------\n");
	printf("영수 : %d, %d, %d, %d 개인 총점 : %d\n", score[2][0], score[2][1], score[2][2], score[2][3], score[2][4]);
	printf("---------------------------------------\n");
	printf("영희 : %d, %d, %d, %d 개인 총점 : %d\n", score[3][0], score[3][1], score[3][2], score[3][3], score[3][4]);
	printf("---------------------------------------\n");
	printf("과목 : %d, %d, %d, %d 총 합 : %d\n", score[4][0], score[4][1], score[4][2], score[4][3], score[4][4]);
	printf("---------------------------------------\n");

}





