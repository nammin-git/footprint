#include <stdio.h>

int main(void)
{
	printf("%e\n\n", 0.123456789);

	//floating.c
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	printf("float의 크기=%d\n",sizeof(float));
	printf("double의 크기=%d\n", sizeof(double));

	printf("x=%30.25f\n", x);
	printf("y=%30.25f\n\n", y);


	//부동 소수점 상수
	double a = 1.23456;
	double b = 2.;
	double c = .28;
	double d = 2e+10;
	double e = 2e-10;
	double f = 9.26E3;
	double g = 0.67e-9;

	printf("%f\n", a);
	printf("%f\n", b);
	printf("%f\n", c);
	printf("%f\n", d);
	printf("%f\n", e);
	printf("%f\n", f);
	printf("%f\n\n", g);

	printf("%.12f\n", e);
	printf("%.12f\n\n", g);


	//언더플로우
	float x = 1e39;
	printf("x=%e\n", x);

	float x = 1.23456e-38;
	float y = 1.23456e-40;
	float z = 1.23456e-46;

	printf("x = %e\n", x);
	printf("y = %e\n", y);
	printf("z = %e\n", z);


	//주의할 점
	double x;
	x = (1.0e20 + 5.0) - 1.0e20;
	printf("%f\n",x);


	//문자 변수와 문자 상수
	char code;

	code = 65; //문자 변수
	printf("%c\n", code);

	code = 'A'; //문자 상수
	printf("%c\n", code);


	//char_var.c
	char code1 = 'A';
	char code2 = 65;

	printf("문자 상수 초기화 = %c\n", code1);
	printf("아스키 코드 초기화 = %c\n", code2);


	//경고음 내기
	char beep1 = 7;
	printf("%c", beep1);

	char beep2 = '\a';
	printf("%c", beep2); //ㅡㅡㅡㅡㅡㅡㅡ왜 두 번 안 나오고 한 번만 나옴?ㅡㅡㅡㅡㅡㅡㅡㅡㅡ


	//escape.c
	int id, pass;
	char beep = '\a';

	printf("아이디와 패스워드를 4개의 숫자로 입력하세요:\n");
	printf("id: ____\b\b\b\b");
	scanf_s("%d", &id);

	printf("pass: ____\b\b\b\b");
	scanf_s("%d", &pass);

	printf("%c", beep);
	printf("입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.\n", id, pass);
	//ㅡㅡㅡㅡㅡㅡㅡㅡㅡ 아이디와 패스워드 문자열로 만들기(지금은 0으로 시작하는 숫자 불가능) ㅡㅡㅡㅡㅡㅡㅡㅡ
	//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ 경고음이 마지막 문장보다 먼저 나오게 하기 ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ


	//정수형으로서 char형
	char code = 'A';

	printf("%d %d %d \n", code, code+1, code+2);
	printf("%c %c %c \n", code, code + 1, code + 2);



	//실습: 태양빛 도달 시간
	float v;
	double d;
	double t;

	v = 3.0e5;
	d = 1496e5;
	t = d / v;


	printf("빛의 속도는 %fkm/s\n", v);
	printf("태양과 지구와의 거리 %fkm\n", d);
	printf("도달 시간은 %f초\n", t);



	return 0;
}