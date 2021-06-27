//함수 문제 풀기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//15596. 정수 N개의 합

long long sum(int* a, int n);

void main()
{
	//정수 입력 받기
	int n;
	int* a;
	a = 0;

	printf("배열 a에 저장할 원소의 갯수를 입력하시오: ");
	scanf_s("%d", &n);

	srand((unsigned)time(NULL));

	for (int i = 0; i < n; i++) {
		a[i] = rand() % 10000;
		if ((i % 10 == 0) && i != 0) {
			printf("%d ", a[i]);
			printf("\n");
		}
		else
			printf("%d ", a[i]);
	}

	printf("배열 a 원소의 총 합 =  %d\n", sum(a, n));
}

long long sum(int* a, int n) {
	int result = 0;
	
	for (int i = 0; i < n; i++) {
		result += a[i];
	}

	return result;
}

