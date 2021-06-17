//책
//10장 배열
#include <stdio.h>

//입력받은 정수를 역순으로 출력하기

void main()
{
	//입력받아서 배열에 저장
	int arr[5] = { 0 };
	
	for (int i = 0; i < 5; i++) {
		printf("정수를 입력하시오: ");
		scanf_s("%d", &arr[i]);
	}

	//역순으로 출력
	for (int i = 5; i > 0; i--) {
		printf("%d\n", arr[i - 1]);
	}
}


//막대그래프로 값 나타내기
#define STUDENTS 5

void main(void)
{
	int grade[STUDENTS] = { 30,20,10,40,50 };

	for (int i = 0; i < STUDENTS; i++) {
		printf("번호 %d: ", i);
		for (int s = 0; s < grade[i]; s++) {
			printf("*");
		}
		printf("\n");
	}


}


//주사위를 던져 나온 면 세기
#include <stdlib.h>
#include <time.h>
#define SIZE 6

void main()
{
	int dice[SIZE] = { 0 };
	int d_face;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10000; i++) {
		d_face = rand() % SIZE + 1;
		dice[d_face - 1]++;
	}

	printf("====================\n");
	printf("면		빈도\n");
	printf("====================\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d		%d\n", i + 1, dice[i]);
	}
}


//tic-tac-toc 게임

void main()
{

}
