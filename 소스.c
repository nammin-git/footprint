#include <stdio.h>
#define SEED_MONEY 1000000
#include <Windows.h>

void add();

void main(void)
{
	//�� �� ���� ������ 10�谡 �Ǵ��� ����ϴ� ���α׷�
	int year;
	double money;
	money = SEED_MONEY;

	for (year = 0; ; year++) {
		money += money * 0.3;
		if (money > SEED_MONEY * 10)
			break;
	}

	year++;

	printf("%d\n", year);


	//for �ݺ����� �̿��Ͽ� A+B ���
	int n, i;
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		add();
	}


	//���� A+B
	long T, i;
	scanf_s("%d", &T);

	for (i = 0; i < T; i++) {
		add();
	}


	//N���� 1���� �� �ٿ� �ϳ��� ����ϴ� ���α׷�
	int N, i;
	scanf_s("%d", &N);

	for (i = N; i > 0; i--) {
		printf("%d\n", i);
		Sleep(100);
	}


}

void add(){
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("%d\n", num1 + num2);
}
