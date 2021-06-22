#include <stdio.h>

//�л����� ������ �Է¹޾Ƽ� ����� ���ϴ� ���α׷�
#define STUDENTS 3
void main(void)
{
	float grade[STUDENTS];
	float average, sum = 0;
	
	printf("%d���� ������ �Է��Ͻÿ�: ", STUDENTS);
	for (int i = 0; i < STUDENTS; i++) {
		scanf_s("%f", &grade[i]);
	}
	
	for (int j = 0; j < STUDENTS; j++) {
		sum += grade[j];
	}

	average = sum / STUDENTS;
	printf("%d���� ��� ������ %.2f���Դϴ�.\n", STUDENTS, average);
}


//���� ����� ���ϴ� ���α׷�
//�Լ� ���
#define STUDENTS 3

int get_average(float a[], int n);
void distri_chart(float a[], int n);

void main(void)
{
	float grade[STUDENTS] = { 10.0,20.0,30.0 };
	float average;

	average = get_average(grade, STUDENTS);

	printf("%d���� ��� ������ %.2f���Դϴ�.\n", STUDENTS, average);

	printf("���� �������� ����մϴ�.\n");
	distri_chart(grade, STUDENTS);

}

//��� ��� �Լ�
int get_average(float a[], int n) {
	float sum = 0.0;

	for (int i = 0; i < n; i++) {
		sum += a[i];
	}

	return sum / n;
}

//������ ��� �Լ�
void distri_chart(float a[], int n) {
	int chart[10][2] = { 0 };

	printf("������	�ο���\n");
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

