//랜덤함수-배열-검색
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int arr[10];

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 50 + 1;
	}

	int target, count=0;

	//숫자 범위
	while (1) {
		printf("찾을 숫자를 입력하시오(단, 숫자는 1~50 사이의 숫자여야 합니다.): ");
		scanf_s("%d", &target);

		if ((target < 1) || (target > 50)) {
			printf("숫자를 잘못 입력하셨습니다.\n");
			continue;
		}

		else
			break;
	}

	//target이 배열 안에 있는지 검사
	for (int i = 0; i < 10; i++) {
		if (target == arr[i])
			count++;
	}

	printf("%d는 배열 안에 %d개 있습니다.\n", target, count);


}