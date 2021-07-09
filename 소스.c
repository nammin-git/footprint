#include <stdio.h>

//피라미드를 쌓아라
//    *                         (1,5)7
//   ***                   (2,4)(2,5)(2,6)9
//  *****             (3,3)(3,4)(3,5)(3,6)(3,7)11
// *******       (4,2)(4,3)(4,4)(4,5)(4,6)(4,7)(4,8)13
//********* (5,1)(5,2)(5,3)(5,4)(5,5)(5,6)(5,7)(5,8)(5,9)

void main()
{
	int floor;
	
	printf("몇 층으로 쌓겠느냐? ");
	scanf_s("%d", &floor);

	int i, j;

	for (i = 1; i <= floor; i++) {
		for (j = 1; j < 2 * floor; j++) {
			if ((j < floor) && (i + j <= floor))
				printf(" ");
			else if ((j < floor) && (i + j > floor))
				printf("*");
			else if (j == floor)
				printf("*");
			else if ((j > floor) && (j - i < floor))
				printf("*");
			else if ((j > floor) && (j - i >= floor))
				printf(" ");
		}
		printf("\n");
	}
}


void main(void)
{
	int floor;

	printf("몇 층으로 쌓겠느냐? ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++)
			printf(" ");
		for (int k = 0; k < 2 * i + 1; k++)
			printf("*");
		printf("\n");
	}
}


//버스를 탄다고 가정
//학생과 일반인으로 구분 (일반인 : 20세 이상)
void main()
{
	int age = 15;
	if (age >= 20)
		printf("일반인입니다.\n");
	else
		printf("학생입니다.\n");

//학생을 초등학생(8~13) / 중학생(14~16) / 고등학생(17~19)로 나누면?
	if (age >= 8 && age <= 13) {
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16) {
		printf("중학생입니다.\n");
	}
	else if (age >= 17 && age <= 13) {
		printf("고등학생입니다.\n");
	}
	else
		printf("학생이 아닙니다.\n");
}

