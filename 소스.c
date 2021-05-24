#include <stdio.h>

void draw_star(int N);
int draw_star(int N);

int i = 1;

void main(void)
{
	//재귀적인 패턴으로 별 찍기
	int N;

	printf("3의 거듭제곱인 정수를 입력하시오: ");
	scanf_s("%d", &N);



	while (N / 3 > 1) {
		N = N / 3;
		i++;
	}
	


	//하노이 탑 이동 순서
	int n;

	printf("원판의 갯수를 입력하시오: ");
	scanf_s("%d", &n);


}

void draw_star(int N) {
	int i, j;

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			if ((i == N / 3 + 1) && (j == N / 3 + 1))
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}


int draw_star(int N) {
	if (N / 3 > 1)
		return draw_star(N / 3);
	else
		return 

}



