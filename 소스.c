#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//주사위를 던져서 각각의 면이 나옷 횟수를 출력하는 프로그램
void get_dice_face();

//맨 처음 호출되는 경우에만 초기화를 수행하는 난수 함수 작성하기
int get_random();

//무한수열을 계산하는 순환함수
double infinite_sequence(int n);


void main(void)
{
	//주사위 던지기
	//함수 호출
	printf("주사위 던지기를 시작합니다.\n");
	printf("1면\t2면\t3면\t4면\t5면\t6면\n");


	//주사위 던지기를 반복
	int i = 0;

	while (i<2000) {
		get_dice_face();
		i++;
	}


	//무한 수열
	int n;
	
	printf("무한 수열을 계산해드립니다.\n정수를 입력하시오: ");
	scanf_s("%d", &n);

	printf("%lf", infinite_sequence(n));
}


void get_dice_face() {
	//주사위 던진 횟수를 저장할 정적 지역 변수
	static int count;
	count++;

	//각 면에 정적 지역 변수 할당
	static int one = 0;
	static int two = 0;
	static int three = 0;
	static int four = 0;
	static int five = 0;
	static int six = 0;


	//난수 발생
	int dice;

	get_random();

	dice = 1 + rand() % 6;

	//면이 나온 횟수 저장
	switch (dice) {
	case 1:
		one++;
		break;
	case 2:
		two++;
		break;
	case 3:
		three++;
		break;
	case 4:
		four++;
		break;
	case 5:
		five++;
		break;
	case 6:
		six++;
		break;
	}
	//100회 마다 면이 나온 횟수 출력
	if ((count % 100) == 0) {
		if (one < 10)
			printf(" %d %7d %7d %7d %7d %7d\n", one, two, three, four, five, six);
		else
			printf("%d %7d %7d %7d %7d %7d\n", one, two, three, four, five, six);
		//횟수를 초기화하고 싶지 않다면 주석 처리하면 됨
		one = 0;
		two = 0;
		three = 0;
		four = 0;
		five = 0;
		six = 0;
	}
}


int get_random() {
	//호출 횟수를 저장하는 정적 지역 변수
	static int inited = 0;

	if (inited == 0) {
		srand((unsigned)time(NULL));
		inited = 1;
	}
}


//무한수열
double infinite_sequence(int n) {
	if (n <= 1) {
		printf(" %lf\n= ", (float)n);
		return 1.0;
	}
	else {
		printf(" %lf +", 1.0/n);
		return 1.0 / n + infinite_sequence(n - 1);
	}
}
