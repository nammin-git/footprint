#include <stdio.h>

void draw_star(int N);
void draw_star_ri(int N);

void main(void)
{/*
	//이중 반복문 문제 3
	//*
	//**
	//***
	int N;

	printf("N을 입력하시오: ");
	scanf_s("%d", &N);

	draw_star(N);
	

	//이중 반복문 문제 4
	//  *
	// **
	//***
	int N;

	printf("N을 입력하시오: ");
	scanf_s("%d", &N);

	draw_star_ri(N);
*/
	
	//이중 반복문 문제 5
	//마름모 모양 만들기
	int x, y;

	for (y = 1; y <= 9; y++) {
		if(y<=5)
			for(x=1; x<=9; x+=2)
				if
	}

}

void draw_star(int N) {

	int x, y;

	//1~N
	for (y = 1; y <= N; y++) {
		for (x = 1; x <= N; x++)
			if (x <= y)
				printf("*");
		printf("\n");
	}

	//N~1
	for (y = 1; y <= N; y++) {
		for (x = N; x > 0; x--)
			if (x >= y)
				printf("*");
		printf("\n");
	}
}

void draw_star_ri(int N) {
	int x, y;

	//1~N
	for (y = 1; y <= N; y++) {
		for (x = N; x > 0; x--)
			if (x >= y)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}

	//N~1;
	for (y = 1; y <= N; y++) {
		for (x = 1; x <= N; x++)
			if (x >= y)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}

}
