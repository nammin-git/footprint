#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void func();

void main(void)
{
	//배열에 값을 초기화하고 출력하는 프로그램
	int arr[3] = { 1,2,3 };
	for (int i = 0; i < 3; i++)
		printf("%d\n", arr[i]);


	//배열에 값을 대입하고 출력하는 프로그램
	int arr[3];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	for (int i = 0; i < 3; i++)
		printf("%d\n", arr[i]);


	//배열에 난수를 포함시키는 프로그램
	int i;
	int grade[SIZE];

	for (i = 0; i < SIZE; i++)
		grade[i] = rand() % 100;

	for (i = 0; i < SIZE; i++)
		printf("grade[%d]=%d\n", i, grade[i]);


	//a[6]의 원소 초기화
	int a[] = { 1,2,3,4,5,6 };


	//구구단 출력하기
	int table;

	printf("출력할 단을 입력해주세요: ");
	scanf_s("%d", &table);

	func(table);


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
		printf("1 2 3 4 5 6 7 8 9\n");
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
			seat[seat_number - 1] = 1;
			printf("예약되었습니다.\n");
			printf("======================\n");
			printf("\n");
		}
		else {
			printf("이미 예약된 좌석입니다.\n");
			printf("======================\n");
			printf("\n");
		}
	}
	}
}

void func(int table) {
	int arr[9];

	int i;
	for (i = 0; i < 9; i++)
		arr[i] = (i + 1) * table;

	for (i = 0; i < 9; i++)
		printf("arr[%d] = %d\n", i, arr[i]);


}

