#include <stdio.h>

void main(void)
{
	//소문자를 대문자로 변경하는 프로그램
	char letter;
	
	while (1) {
		printf("소문자를 입력하세요: ");
		scanf_s(" %c", &letter, 1); //공백문자 제외
		
		if (letter == 'Q')
			break;
		else if (letter < 'a' || letter>'z')
			continue;

		letter -= 32;
		printf("변환된 대문자는 %c입니다.\n", letter);
	}
	

	//3의 배수를 걸러내는 프로그램
	int i;

	for (i = 1; i < 10; i++) {
		if (i % 3 == 0)
			//break;
			continue;
		printf("%d ", i);
	}


	//파이 구하기
	int n, i;
	double pi = 0.0;
	double k = 1.0;

	printf("반복 횟수를 입력하시오: ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		pi += 4.0 / k - 4.0 / (k + 2.0);
		k = k + 4.0;
	}

	printf("Pi = %f", pi);
	//맞나? 숫자 다름

	
	//파이 구하기 2
	int loop_count;
	double pi = 3.0;
	double k = 2.0;

	printf("반복 횟수를 입력하시오: ");
	scanf_s("%d", &loop_count);

	while (loop_count > 0) {
		if(loop_count%2==1)
			pi += 4.0 / (k * (k + 1.0) * (k + 2.0));
		else
			pi -= 4.0 / (k * (k + 1.0) * (k + 2.0));
		k = k + 2.0;
		loop_count--;
	}

	printf("pi = %.20f\n", pi);


}