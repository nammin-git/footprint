#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define VOTERS 100
#define CANDIDATES 11
#define SIZE 10

//최소값을 찾는 함수
int get_min(int* price);

void main()
{
	//배열 선언
	int price[SIZE] = { 0 };

	//난수 초기화
	srand((unsigned)time(NULL));

	printf("1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t\n");
	printf("-----------------------------------------------------------------------\n");

	//배열 만들기
	for (int i = 0; i < SIZE; i++) {

		price[i] = rand() % 101;		
	}

	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t\n", price[0], price[1], price[2], price[3], price[4], price[5], price[6], price[7], price[8], price[9]);
	printf("-----------------------------------------------------------------------\n");

	//최소값 찾기
	printf("최소값은 %d입니다.\n", get_min(price));
	//get_min(price[SIZE])라고 쳤더니 오류
	//배열 이름 price를 받는 것으로 함수에 정의되어 있었으므로 배열 이름만 치면 됨
}

//최소값을 찾는 함수
int get_min(int* price) {
	int i, min;

	for (i = 0; i < SIZE - 1; i++) {
		min = price[i];
		if (price[i + 1] < min)
			return price[i + 1];
		else
			return min;
	}
}


//최대값 찾기
void main()
{
	//배열 선언
	int prices[SIZE];
	
	printf("------------------------------------------------------------------------------\n");
	printf("1	2	3	4	5	6	7	8	9	10\n");
	printf("------------------------------------------------------------------------------\n");

	//난수 초기화
	srand((unsigned)time(NULL));

	//배열에 내용 넣기
	for (int i = 0; i < SIZE; i++) {
		prices[i] = rand() % 100 + 1;
		printf("%-7d ", prices[i]);
	}

	printf("\n\n");
	
	int max;
	max = prices[0];

	//최대값 찾기
	for (int i = 0; i < SIZE; i++) {
		if (prices[i] > max)
			max = prices[i];
	}

	//최대값 출력하기
	printf("최대값은 %d입니다.\n", max);
}



//투표 집계하기
//내가 투표자일 경우
void main()
{
	int num_candidate = 0;

	//배열 만들기
	int freq[CANDIDATES + 1] = { 0 };
	//후보자는 1번부터 시작하므로 0부터 10번까지 배열을 만들어야 함

	do {
	printf("몇 번 후보자를 선택하시겠습니까?(종료: -1): ");
	scanf_s("%d", &num_candidate);
	freq[num_candidate]++;
	} while (num_candidate > 0);

	//후보 번호와 득표 결과 출력하기
	printf("값	득표결과\n");

	for (int i = 0; i < CANDIDATES; i++) {
		printf("%d	%d\n", i + 1, freq[i]);
	}
}


//투표 집계하기
//랜덤 투표자 100명의 투표 결과를 조사
void main()
{
	int num_candidate = 0;

	//배열 만들기
	int freq[CANDIDATES] = { 0 };

	//난수 발생시키기
	srand((unsigned)time(NULL));

	//투표자의 표를 받기
	for (int i = 0; i < VOTERS; i++) {
		num_candidate = 1 + rand() % 10;
		freq[num_candidate]++;
	}

	//후보 번호와 득표 결과 출력하기
	printf("값		득표결과\n");

	for (int i = 1; i < CANDIDATES; i++) {
		printf("%d		%d\n", i, freq[i]);
	}

	//투표 결과 비교하기
	int elected, j;
	elected = 0;

	for (j = 1; j < CANDIDATES; j++) {
		if (freq[j] > freq[elected])
			elected = j;
	}

	//1등 출력하기
	printf("\n당선자는 %d표를 얻은 후보 %d번 입니다.\n", freq[elected], elected);
}
