#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define BOTTLE 4

int GetTreatment();
int GetRandomBottle(int count, int treatment);

void main()
{
	printf("\n\n === 아빠는 대머리 게임 ===\n\n");
	Sleep(1000);
	printf("대머리인 아빠를 위해 발모제를 찾아주세요 !!\n\n\n");
	Sleep(1000);

	//발모제 지정하기
	srand((unsigned)time(NULL));
	int treatment=GetTreatment(BOTTLE);

	//병들을 머리에 뿌리며 머리가 나는지 아닌지를 봅니다(3번 실행)
	//보여줄 병들을 선택
	printf("일단 머리에 병들을 뿌려볼게요.\n\n");

	for (int i = 1; i <= 3; i++) {
		printf("%d 회 시도\n\n", i);
		if (GetRandomBottle(i, treatment) == 0) {
			printf("머리가 났어요!\n\n");
		}
		else {
			printf("머리가 나지 않았어요.\n\n");
		}
		printf("... 계속하려면 엔터 키를 눌러주세요 ...\n\n");
		getchar();
	}

	//발모제 찾기
	int answer;

	printf("==================\n이제 발모제를 찾아봅시다.\n");
	printf("발모제는 몇 번 병입니까?\n");
	scanf_s("%d", &answer);

	if (answer == treatment + 1) {
		printf("\n\n >> 성공 !\n축하합니다 ! 발모제를 찾았습니다 !!\n");
	}
	else {
		printf("\n\n >> 땡 !\n발모제는 %d 번 병이었습니다 !\n아빠는 계속 대머리로 지내야 합니다 ...", treatment + 1);
	}


}

int GetTreatment() {
	//발모제를 랜덤으로 설정합니다
	return rand() % BOTTLE;
}


int GetRandomBottle(int count, int treatment) {
	//보여줄 발모제를 선택합니다
	int selectedBottle, prevSelectedBottle = 0;
	int isIncluded = 0;

	printf("선택된 병은 ");
	for (int j = 0; j < count; j++) {
		selectedBottle = 1 + rand() % BOTTLE;
		if (prevSelectedBottle == selectedBottle) {
			j--;
			continue;
		}

		printf("%d ", selectedBottle);

		if (selectedBottle == treatment + 1) {
			isIncluded++;
		}

		prevSelectedBottle = selectedBottle;
	}
	printf("입니다.\n머리에 뿌렸더니 ");

	return isIncluded;
}

