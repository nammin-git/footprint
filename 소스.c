#include <stdio.h>
#include <math.h>
#include <conio.h>

void main(void)
{
	//실수의 제곱근을 구하는 무한루프
	double v;

	while (1) {
		printf("실수값을 입력하시오: ");
		scanf_s("%lf", &v);

		if (v < 0.0)
			break;
		
		printf("%f의 제곱근은 %f입니다.\n", v, sqrt(v));
	}


	//goto문을 사용하여 반복문 빠져나오기
	int x, y;

	for (y = 1; y < 10000; y++) {
		for (x = 1; x < 50; x++) {
			if (_kbhit())
				goto OUT;
			printf("*");
		}
		printf("\n");
	}

	OUT;
	//안 됨


	//continue문 사용하기
	int i;

	for (i = 0; i < 10; i++) {
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}


	//소문자를 대문자로 바꾸는 프로그램
	char letter;

	while (1) {
		printf("소문자를 입력하시오: ");
		scanf_s("%c", &letter, 1);

		if (letter == 'Q')
			break;
		if ((letter < 'a') || (letter > 'z'))
			continue;
		
		letter -= 32;
		printf("변환한 대문자는 %c입니다.\n", letter);
	}
	//소문자 입력문구가 두 번 나옴
}