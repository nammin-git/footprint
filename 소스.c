#include <stdio.h>

//학생들의 성적을 입력받아서 평균을 구하는 프로그램
#define STUDENTS 3
void main(void)
{
	float grade[STUDENTS];
	float average, sum = 0;
	
	printf("%d명의 성적을 입력하시오: ", STUDENTS);
	for (int i = 0; i < STUDENTS; i++) {
		scanf_s("%f", &grade[i]);
	}
	
	for (int j = 0; j < STUDENTS; j++) {
		sum += grade[j];
	}

	average = sum / STUDENTS;
	printf("%d명의 평균 점수는 %.2f점입니다.\n", STUDENTS, average);
}


//성적 평균을 구하는 프로그램
//함수 사용
#define STUDENTS 3

int get_average(float a[], int n);
void distri_chart(float a[], int n);

void main(void)
{
	float grade[STUDENTS] = { 10.0,20.0,30.0 };
	float average;

	average = get_average(grade, STUDENTS);

	printf("%d명의 평균 점수는 %.2f점입니다.\n", STUDENTS, average);

	printf("성적 분포도를 출력합니다.\n");
	distri_chart(grade, STUDENTS);

}

//평균 계산 함수
int get_average(float a[], int n) {
	float sum = 0.0;

	for (int i = 0; i < n; i++) {
		sum += a[i];
	}

	return sum / n;
}

//분포도 출력 함수
void distri_chart(float a[], int n) {
	int chart[10][2] = { 0 };

	printf("점수대	인원수\n");
	printf("---------------\n");

	for (int i = 0; i < 10; i++) {
		chart[i][0] = i;
	}

	for (int j = 0; j < 10; j++) {
		for (int k = 0; k < n; k++) {
			if (a[k] == (float)chart[j][1]) {
				chart[j][1]++;
			}
		}

	}

	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			printf("%3d-%3d	%3d", chart[i][0] * 10, chart[i][0] * 10 + 10, chart[i][1]);
		}
		else{
			printf("%3d-%3d	%3d", chart[i][0] * 10 + 1, chart[i][0] * 10 + 10, chart[i][1]);
		}
		printf("\n");
	}


}

