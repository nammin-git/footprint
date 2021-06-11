//배열 문제
#include <stdio.h>

//문제 2. 성적의 평균점수와 최고점수 출력하기
#define SIZE 10


int Avg(int* score);
int Max(int* score);

void main()
{
	//배열 선언
	int score[SIZE];

	//성적 입력 받아서 배열을 완성하기
	for (int i = 0; i < SIZE; i++) {
		printf("학생 %d의 성적을 입력하시오(성적은 0~100사이 입니다.): ", i + 1);
		scanf_s("%d", &score[i]);

		//0~100사이 숫자가 아니면 다시 입력시키기
		if ((score[i] < 0) || (score[i] > 100)) {
			printf("숫자를 잘못 입력하셨습니다.\n");
			i--;
		}
		else 
			continue;
	}

	printf("\n");
	printf("학생들의 평균은 %d이고, 최고 점수는 %d번 학생의 %d점입니다.\n", Avg(score), Max(score) + 1, score[Max(score)]);

}

int Avg(int* score) {
	int ttl = 0;
	int avg = 0;

	for (int i = 0; i < SIZE; i++) {
		ttl += score[i];
	}

	avg = ttl / SIZE;

	return avg;
}


int Max(int* score) {
	int max = 0;

	for (int i = 0; i < SIZE; i++) {
		if (score[max] < score[i])
			max = i;
	}

	return max;
}



//문제 3. 배열 안에서 정렬하기
#define SIZE 7

void main()
{
	int arr[SIZE] = { 1,3,5,7,10,15 };
	int num;

	printf("정렬할 숫자를 입력하시오.: ");
	scanf_s("%d", &num);
	
	//정렬하기
	int tmp;

	for (int i = SIZE - 2; i > 0; i--) {
		if (arr[i] > num) {
			tmp = arr[i];
			arr[i] = num;
			arr[i + 1] = tmp;
		}
		else
			break;
	}

	//확인용 출력
	for (int i = 0; i < SIZE; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}



//문제 4. 행과 열의 합계 구하기
//version 1

void main()
{
	int a[3][5] = {
		{12,56,32,16,98},
		{99,56,34,41,3},
		{65,3,87,78,21}
	};

	//1열의 합
	int sum = 0;

	sum = a[0][0] + a[1][0] + a[2][0];
	printf("1열의 합 = %d\n", sum);

	//2열의 합
	sum = a[0][1] + a[1][1] + a[2][1];
	printf("2열의 합 = %d\n", sum);

	//3열의 합
	sum = a[0][2] + a[1][2] + a[2][2];
	printf("3열의 합 = %d\n", sum);

	//4열의 합
	sum = a[0][3] + a[1][3] + a[2][3];
	printf("4열의 합 = %d\n", sum);

	//5열의 합
	sum = a[0][4] + a[1][4] + a[2][4];
	printf("5열의 합 = %d\n", sum);

	printf("\n");

	//1행의 합
	sum = a[0][0] + a[0][1] + a[0][2] + a[0][3] + a[0][4];
	printf("1행의 합 = %d\n", sum);

	//2행의 합
	sum = a[1][0] + a[1][1] + a[1][2] + a[1][3] + a[1][4];
	printf("2행의 합 = %d\n", sum);
	
	//3행의 합
	sum = a[2][0] + a[2][1] + a[2][2] + a[2][3] + a[2][4];
	printf("3행의 합 = %d\n", sum);
}


//version 2. 반복문으로 처리
void main()
{
	int a[3][5] = {
		{12,56,32,16,98},
		{99,56,34,41,3},
		{65,3,87,78,21}
	};

	int sum = 0;

	//1열의 합
	for (int i = 0; i < 3; i++)
		sum += a[i][0];
	
	printf("1열의 합 = %d\n", sum);
	sum = 0;

	//2열의 합
	for (int i = 0; i < 3; i++)
		sum += a[i][1];
	
	printf("2열의 합 = %d\n", sum);
	sum = 0;

	//3열의 합
	for (int i = 0; i < 3; i++)
		sum += a[i][2];

	printf("3열의 합 = %d\n", sum);
	sum = 0;

	//4열의 합
	for (int i = 0; i < 3; i++)
		sum += a[i][3];

	printf("4열의 합 = %d\n", sum);
	sum = 0;

	//5열의 합
	for (int i = 0; i < 3; i++)
		sum += a[i][4];

	printf("5열의 합 = %d\n\n", sum);
	sum = 0;


	//1행의 합
	for (int i = 0; i < 5; i++)
		sum += a[0][i];

	printf("1행의 합 = %d\n", sum);
	sum = 0;

	//2행의 합
	for (int i = 0; i < 5; i++)
		sum += a[1][i];

	printf("2행의 합 = %d\n", sum);
	sum = 0;

	//3행의 합
	for (int i = 0; i < 5; i++)
		sum += a[2][i];

	printf("3행의 합 = %d\n", sum);
	sum = 0;
}

