#include <stdio.h>

int main(void)
{
	//Programming_1
	
	float data1; //double 하니까 이상하게 나옴

	printf("실수를 입력하십시오: ");
	scanf_s("%f", &data1);

	printf("실수형식으로는 %f입니다.\n", data1);
	printf("지수형식으로는 %e입니다.\n\n", data1);


	//Programming_2
	int data2;

	printf("16진수 정수를 입력하시오: ");
	scanf_s("%x", &data2);

	printf("8진수로는 %o입니다.\n", data2);
	printf("10진수로는 %d입니다.\n", data2);
	printf("16진수로는 %x입니다.\n\n", data2);
	

	//Programming_3
	int x = 10;
	int y = 20;
	int tmp;

	printf("x=%d y=%d\n", x, y);
	
	tmp = x;
	x = y;
	y = tmp; //이렇게 하는게 맞나?ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ

	printf("x=%d y=%d\n\n", x, y);


	//Programming_4
	double length, width, height;
	double volumn;

	printf("상자의 가로, 세로, 높이를 한 번에 입력: ");
	scanf_s("%lf %lf %lf", &length, &width, &height);

	volumn = length * width * height;

	printf("상자의 부피는 %f입니다.", volumn);


	//Programming_5
	const double SQMETER_PER_PYEONG = 3.3058;
	
	int p;
	double sqmeter;

	printf("평을 입력하세요: ");
	scanf_s("%d", &p);

	sqmeter = p * SQMETER_PER_PYEONG;

	printf("%f평방미터입니다.", sqmeter);
	


	//Programming_6
	float num1 = 3.32e-3;
	float num2 = 9.76e-8;
	float sum;

	sum = num1 + num2;

	printf("%f", sum);
	

	//Programming_7
	double m, v, E;

	printf("질량: ");
	scanf_s("%lf", &m);
	printf("속도: ");
	scanf_s("%lf", &v);

	E = m * v * v / 2.0;

	printf("운동에너지: %lf", E);


	//Programming_8
	printf("%c %c %c", 'a' + 1, 'a' + 2, 'a' + 3);


	//Programming_9
	char beep = '\a';
	printf("%c", beep);
	printf("(경보음)화재가 발생하였습니다.\n");
	printf("%c", beep); //경보음이 먼저 울리지를 않는다 ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ


	//Programming_10
	printf("\"ASCII code\",\'a\',\'b\'.\'c,\n");
	printf("\\t \\a \\n");

	return 0;
}