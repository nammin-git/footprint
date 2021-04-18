#include <stdio.h>

int main(void)
{
	/*
	int kor, eng, math, avg;

	printf("국어, 영어, 수학 점수를 입력해주세요.\n");
	scanf_s("%d %d %d", &kor, &eng, &math);

	avg = (kor + eng + math) / 3;

	if (abg >= 90)
		printf("A");
	if elst()


	int i;
	printf("정수를 입력하세요:");
	scanf_s("%d", &i);

	if (i == 7)
		printf("7을 입력했습니다.\n\n");


	int a = 30;

	if (a > 50)
		printf("50보다 큰 수 입니다.\n");
	else if (a == 50)
		printf("50입니다.\n");
	else
		printf("50보다 작은 수 입니다.\n");

*/
	int i;
	
	printf("값을 입력해주세요: ");
	scanf_s("%d", &i);

	switch (i) {
	case 0:
		printf("입력한 값은 0입니다.\n");
		break;
	case 1:
		printf("1을 입력했습니다.\n");
		break;
	default:
		printf("0, 1이 아닌 다른 수 입니다.\n");
		break;

	}



	return 0;
}