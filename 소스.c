#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define BOTTLE 4

void main()
{
	srand((unsigned)time(NULL));

	printf("\n\n === 아빠는 대머리 게임 === \n\n");

	int answer;
	int treatment = rand() % BOTTLE;
	int isIncluded = 0;
	int hint = 0;
	char blank = 0;

	//발모제 찾기 시도 
	for (int i = 1; i <= 3; i++) {
		//1차 시도 (숫자 하나 입력 가능)
		printf("발모제를 찾아봅시다\n숫자 %d 개를 입력하세요(숫자들 사이는 띄어쓰기): ", i);

		int j = 0;
		do {
			scanf_s("%d", &hint);
			if (hint == treatment) {
				isIncluded++;
			}
			j++;
		} while (j <= i);
		scanf_s("%c", &blank, 1);
	}


	//발모제 선택
	printf("발모제를 선택하세요: ");
	scanf_s("%d", answer);

	if (answer == treatment + 1) {
		printf(" >> 성공 ! 발모제를 찾았습니다.\n 축하해요 !! 머리가 자랐네요 !\n");
	}
	else {
		printf(" >> 땡 ! 발모제는 %d번입니다...\n머리가 자라지 않았습니다ㅠㅠ\n");
	}


}


int main(void) {
	srand((unsigned)time(NULL));

	printf("\n\n === 아빠는 대머리 게임 === \n\n");

	int answer;		//사용자 입력값
	int treatment = rand() % 4;		//발모제 선택 (0~3)

	int cntShowBottle = 0;	//이번 게임에 보여줄 병 갯수
	int prevCntShowBottle = 0;	//앞 게임에 보여준 병 갯수
	//보여주는 병 갯수를 차차 늘려줌으로써 정답률 향상

	//3번의 기회 (3번의 발모제 투여 시도)
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0 };	//4개의 병
		do {
			cntShowBottle = rand() % 2 + 2;		//2~3개의 병이 뽑히도록 설정
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;

		int isIncluded = 0;		//보여줄 병 중에 발모제가 포함되었는지 여부
		printf(" > %d 번째 시도 : ", i);

		//보여줄 병 종류를 선택
		for (int j = 0; j < cntShowBottle; j++) {
			int randBottle = rand() % 4;	//병을 뽑습니다

			//아직 선택되지 않은 병이면 >>>> 선택 처리
			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;
				if (randBottle == treatment) {
					isIncluded = 1;
				}
			}
			//이미 선택된 병이면 >>>> 중복이므로 다시 선택
			else {
				j--;
			}
		}

		//사용자에게 문제 표시
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1)
				printf("%d ", k + 1);
		}
		printf("물약을 머리에 바릅니다\n");

		if (isIncluded == 1) {
			printf("  >> 성공! 머리가 났어요 !!\n");
		}
		else {
			printf("  >> 실패! 머리가 나지 않았어요.. ㅠㅠ\n");
		}

		printf("\n ... 계속하려면 아무 키나 누르세요 ...");
		getchar();
	}

	printf("\n\n발모제는 몇 번일까요? ");
	scanf_s("%d", &answer);

	if (answer == treatment + 1) {
		printf("\n >> 정답입니다!\n");
	}
	else
	{
		printf("\n >> 땡 ! 틀렸어요, 정답은 %d 입니다!\n", treatment + 1);
	}

}

