#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//정수 n개의 합을 구하는 함수
long long sum(int* a, int n) {

}

void main(void)
{
	/*
	//영화관 좌석 예약 시스템
	char yes_no;

	//배열을 만듦
	int seat[10] = { 0 };


	//반복 시작
	while (1) {
		printf("좌석을 예약하시겠습니까?(y 또는 n): ");
		scanf_s(" %c", &yes_no, 1);

		//예매 안 할 때
		if (yes_no == 'n')
			break;
		//예매할 때
		else if (yes_no == 'y') {
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("-----------------------\n");

			//남은 좌석 보기
			for (int i = 0; i < 10; i++)
				printf(" %d", seat[i]);
			printf("\n");

			//좌석 예약하기
			int seat_number;
			printf("몇 번째 좌석을 예약하시겠습니까? ");
			scanf_s("%d", &seat_number);

			//예약 안 된 좌석일 때만 예약할 수 있도록
			if (seat[seat_number - 1] != 0) {
				printf("이미 예약된 좌석입니다.\n");
				printf("======================\n");
				printf("\n");
			}
			else {
				seat[seat_number - 1] = 1;
				printf("예약되었습니다.\n");
				printf("======================\n");
				printf("\n");
			}
		}
	}
	*/

	//정수 n개의 합을 구하는 함수
	int a[n];

	for(int i=0; i<n;i++)

}
