#include <stdio.h>
#include <time.h>
/*
void swap(int a, int b);
void swap_addr(int* a, int* b);

void main()
{
	//SWAP 
	int a = 10;
	int b = 20;
	printf("a 의 주소 : %d\n", &a);
	printf("b 의 주소 : %d\n", &b);


	printf("\n============\n\n");

	//값에 의한 복사 (Call by Value) ... 값만 복사함

	printf("Swap 함수 전 => a : %d,  b : %d\n", a, b);
	swap(a, b);
	printf("Swap 함수 후 => a : %d,  b : %d\n", a, b);

	printf("\n============\n\n");

	//주소값을 넘기면? 
	printf("(주소값 전달)Swap 함수 전 => a : %d,  b : %d\n", a, b);
	swap_addr(&a, &b);
	printf("(주소값 전달)Swap 함수 후 => a : %d,  b : %d\n", a, b);

}

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	
	printf("Swap 함수 내 a 의 주소 : %d\n", &a);
	printf("Swap 함수 내 b 의 주소 : %d\n", &b);
	printf("Swap 함수 내 => a : %d,  b : %d\n", a, b);
}

void swap_addr(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	printf("(주소값 전달)Swap 함수 내 a 의 주소 : %d\n", &a);
	printf("(주소값 전달)Swap 함수 내 b 의 주소 : %d\n", &b);
	printf("(주소값 전달)Swap 함수 내 => a : %d,  b : %d\n", *a, *b);

}
*/
/*
void changeArray(int* ptr);

//포인터로 배열 값 변경하기
void main()
{
	int arr2[3] = { 10,20,30 };
	changeArray(arr2);

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}

}

void changeArray(int* ptr) {
	ptr[2] = 50;

}
*/


//물고기 키우기 프로젝트
//...물고기 6마리가 어항에 살고 있어요
//...이들은 덥고 건조한 사막에 있어서, 물을 계속 주지 않으면 어항 속의 물이 증발해버려요
//...어항을 클릭하면 물을 줄 수 있어요
//...시간이 지날수록 물고기는 자란답니다 

int level;
int arrayFish[6];
int* cursor;

void initData();
void printfFishes();
void decreaseWater(long elpasedTime);

int main(void)
{
	long startTime = 0;		//게임 시작 시간
	long totalElapsedTime = 0;		//총 경과 시간
	long prevElapsedTime = 0;		//직전 경과 시간 ( 최근에 물을 준 시간 간격)
	
	int num;	//몇 번 어항에 물을 줄 것인지, 사용자 입력
	initData();

	cursor = arrayFish;

	startTime = clock();
	while (1) {
		printfFishes();
		printf("몇 번 어항에 물을 주시겠어요? ");
		scanf_s("%d", &num);

		//입력값 체크
		if (num < 1 || num>6) {
			printf("\n입력값이 잘못되었습니다\n");
			continue;
		}

		//총 경과 시간
		totalElapsedTime = (clock() - startTime)/CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);
	
		//직전 물 준 시간
		//마지막으로 물 준 시간 이후로 흐른 시간
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);

		//어항의 물을 감소 (증발)
		decreaseWater(prevElapsedTime);


		//사용자가 입력한 어항에 물을 준다
		//1. 어항의 물이 0이면?  >>  물을 주지 않는다
		if (cursor[num - 1] <= 0) {
			printf("%d 번 물고기는 이미 죽었습니다. 물을 주지 않습니다.\n", num);
		}
	}

	return 0;
}

void initData() {

	level = 1;	//게임 레벨 (1-5)
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100;	//어항의 물 높이(0-100)
	}

}

void printfFishes() {
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elpasedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elpasedTime);
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
		}
	}
}

