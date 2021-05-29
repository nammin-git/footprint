#include <stdio.h>

//재귀적인 패턴으로 별 찍기
int draw_star(int N);

//하노이 탑 이동 순서
int recursive(int N);

void main(void)
{
	//변수 선언 및 변수 입력 받기
	int N;

	printf("패턴을 만들어드립니다.\n3의 거듭제곱수를 입력하시오: ");
	scanf_s("%d", &N);

	//함수 실행
	draw_star(N);


	//하노이 탑 이동 순서
	int N;

	printf("원판의 갯수를 입력하시오: ");
	scanf_s("%d", &N);

	printf("\n\n");
	recursive(N);
}

int draw_star(int N) {
	//반복적인 패턴으로 별을 만드므로 반복문 사용
	int i, j;

	//N이 3보다 작아지면 종료
	if (N < 3)
		return 0;
	//N이 3일 때 기본 패턴 출력
	else if (N == 3) {
		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {
				if ((i == N / 3) && (j == N / 3))
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
		return draw_star(N/3);
	}
	//N이 3이 아닌 제곱수일 때
	//?????
	else if ((N / 3) % 3 == 0) {
		return draw_star(N/3);
	}
}


int recursive(int N) {
	//옮긴 횟수를 저장할 정적 지역 변수
	static int K;

	//장대 만들기
	int stick = 1;

	//

	printf("")
}
