#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//break와 continue
void main()
{
	//1번부터 30번까지 있는 반
	//1번에서 5번까지 조별 발표
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("나머지 학생은 집에 가세요.\n");
			break;
		}
		printf("%d 번 학생은 조별 발표 준비를 하세요.\n", i);
	}

	//7번 학생이 아파서 결석
	//7번 학생을 제외하고 6번부터 10번까지 조별 발표
	for (int i = 1; i <= 30; i++) {
		if (i >= 6&&i<=10) {
			if (i == 7) {
				printf("%d 번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d 번 학생은 조별 발표 준비를 하세요.\n", i);
		}		
	}
}


//랜덤
int main(void)
{
	printf("난수 초기화 이전\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}

	srand((unsigned)time(NULL));
	printf("\n난수 초기화 이후\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}
	return 0;
}

//가위 바위 보(0 1 2)
int main()
{
	srand((unsigned)time(NULL));

	int i = rand() % 3;

	if (i == 0) {
		printf("가위\n");
	}
	else if (i == 1) {
		printf("바위\n");
	}
	else if (i == 2) {
		printf("보\n");
	}
	else {
		printf("몰라요\n");
	}

	switch (i) {
	case 0:printf("가위\n"); break;
	case 1:printf("바위\n"); break;
	case 2:printf("보\n"); break;
	default: printf("몰라요\n"); break;
	}
}


//교통카드
int main()
{
	int age = 15;
	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("초등학생입니다\n"); break;
	case 14:
	case 15:
	case 16:printf("중학생입니다\n"); break;
	case 17:
	case 18:
	case 19:printf("고등학생입니다\n"); break;
	default: printf("학생이 아닌가봐요\n"); break;
	}

	return 0;
}


//Up and Down
int main()
{
	srand((unsigned)time(NULL));
	
	int answer = 1 + rand() % 100;
	int n;

	for (int chance = 0; chance < 5; chance++) {
		printf("숫자를 입력하시오: ");
		scanf_s("%d", &n);
		
		if (answer < n) {
			printf("Down ↓\n");
		}
		else if (answer == n) {
			printf("You Win!\n");
			break;
		}
		else if (answer > n) {
			printf("Up ↑\n");
		}
		else
			printf("알 수 없는 오류가 발생했어요\n\n");

		if (chance == 4) {
			printf("You Lose\n");
		}

	}
	
}
