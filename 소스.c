#include <stdio.h>

int main(void)
{
	printf("미디어소프트웨어학부\n2학년\n박예랑\n");

	int x = 123;
	float y = 12.24;
	char z = 'A';

	printf("정수 : %d\n", x);
	printf("실수: %f\n", y);
	printf("문자 : %c\n", z);

	
	int id;

	printf("학번을 입력해주세요: ");
	scanf_s("%d", &id);
	printf("당신의 학번은 %d입니다.", id);


	
	//입력버퍼

	int id, age;
	char gender;

	printf("학번을 입력해주세요: ");
	scanf_s("%d", &id);

	printf("나이을 입력해주세요: ");
	scanf_s("%d", &age);

	while (getchar() != '\n');
	printf("성별을 입력해주세요:(남: m, 여: f) ");
	scanf_s("%c", &gender);

	printf("학번:%d, 나이: %d, 성별: %c\n", id, age, gender);

	

	//나눗셈을 이용한 프로그램

	int num1, num2, div, rest;

	printf("두 수를 입력해주세요: ");
	scanf_s("%d %d", &num1, &num2);

	div = num1 / num2;
	rest = num1 % num2;

	printf("몫: %d, 나머지: %d", div, rest);



	//4시간 30분을 초로 바꾸기

	int hour, minute, second;

	printf("시간을 입력하세요: ");
	scanf_s("%d", &hour);

	printf("분을 입력하세요: ");
	scanf_s("%d", &minute);

	second = hour * 60 * 60 + minute * 60;

	printf("%d시간 %d분은 %d초 입니다.\n", hour, minute, second);




	//필드 폭 지정

	double x = 12.2345678911;
	int y = 10;

	printf("%190d\n", y);
	printf("%-190d\n", y);
	printf("%0900d\n", y);
	printf("%.8lf\n", x);
	
	//형변환
	printf("정수부분만 출력 x=%d\n", (int)x);
	printf("소수부분까지 출력 x=%lf\n", (float)y);

	
	//영수증 출력 프로그램

	int _1_ea, _1_price, _2_ea, _2_price, _3_ea, _3_price;
	int total;

	printf("당근의 개수와 가격을 입력하세요: ");
	scanf_s("%d %d", &_1_ea, &_1_price);

	printf("토마토의 개수와 가격을 입력하세요: ");
	scanf_s("%d %d", &_2_ea, &_2_price);

	printf("오이의 개수와 가격을 입력하세요: ");
	scanf_s("%d %d", &_3_ea, &_3_price);


	printf("\n\n=================================\n");

	printf("\t영수증\n");
	printf("번호\t품명\t개수\t가격\t\n");
	printf("1\t당근\t%d\t%d\t\n", _1_ea, _1_price);
	printf("2\t토마토\t%d\t%d\t\n", _2_ea, _2_price);
	printf("3\t오이\t%d\t%d\t\n", _3_ea, _3_price);
	
	
	
	printf("\n\n---------------------------------\n");
	
	total = _1_ea * _1_price + _2_ea * _2_price + _3_ea * _3_price;

	printf("총합 : %d\n", total);

	printf("=================================");



	return 0;
}