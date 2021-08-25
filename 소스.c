#include <stdio.h>
#include <time.h>
/*
void swap(int a, int b);
void swap_addr(int* a, int* b);

void main()
{
	//SWAP 
	int a = 10;
	int b = 20;
	printf("a �� �ּ� : %d\n", &a);
	printf("b �� �ּ� : %d\n", &b);


	printf("\n============\n\n");

	//���� ���� ���� (Call by Value) ... ���� ������

	printf("Swap �Լ� �� => a : %d,  b : %d\n", a, b);
	swap(a, b);
	printf("Swap �Լ� �� => a : %d,  b : %d\n", a, b);

	printf("\n============\n\n");

	//�ּҰ��� �ѱ��? 
	printf("(�ּҰ� ����)Swap �Լ� �� => a : %d,  b : %d\n", a, b);
	swap_addr(&a, &b);
	printf("(�ּҰ� ����)Swap �Լ� �� => a : %d,  b : %d\n", a, b);

}

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	
	printf("Swap �Լ� �� a �� �ּ� : %d\n", &a);
	printf("Swap �Լ� �� b �� �ּ� : %d\n", &b);
	printf("Swap �Լ� �� => a : %d,  b : %d\n", a, b);
}

void swap_addr(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	printf("(�ּҰ� ����)Swap �Լ� �� a �� �ּ� : %d\n", &a);
	printf("(�ּҰ� ����)Swap �Լ� �� b �� �ּ� : %d\n", &b);
	printf("(�ּҰ� ����)Swap �Լ� �� => a : %d,  b : %d\n", *a, *b);

}
*/
/*
void changeArray(int* ptr);

//�����ͷ� �迭 �� �����ϱ�
void main()
{
	int arr2[3] = { 10,20,30 };
	changeArray(arr2);

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}

}

void changeArray(int* ptr) {
	ptr[2] = 50;

}
*/


//����� Ű��� ������Ʈ
//...����� 6������ ���׿� ��� �־��
//...�̵��� ���� ������ �縷�� �־, ���� ��� ���� ������ ���� ���� ���� �����ع�����
//...������ Ŭ���ϸ� ���� �� �� �־��
//...�ð��� �������� ������ �ڶ���ϴ� 

int level;
int arrayFish[6];
int* cursor;

void initData();
void printfFishes();
void decreaseWater(long elpasedTime);

int main(void)
{
	long startTime = 0;		//���� ���� �ð�
	long totalElapsedTime = 0;		//�� ��� �ð�
	long prevElapsedTime = 0;		//���� ��� �ð� ( �ֱٿ� ���� �� �ð� ����)
	
	int num;	//�� �� ���׿� ���� �� ������, ����� �Է�
	initData();

	cursor = arrayFish;

	startTime = clock();
	while (1) {
		printfFishes();
		printf("�� �� ���׿� ���� �ֽðھ��? ");
		scanf_s("%d", &num);

		//�Է°� üũ
		if (num < 1 || num>6) {
			printf("\n�Է°��� �߸��Ǿ����ϴ�\n");
			continue;
		}

		//�� ��� �ð�
		totalElapsedTime = (clock() - startTime)/CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld ��\n", totalElapsedTime);
	
		//���� �� �� �ð�
		//���������� �� �� �ð� ���ķ� �帥 �ð�
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld ��\n", prevElapsedTime);

		//������ ���� ���� (����)
		decreaseWater(prevElapsedTime);


		//����ڰ� �Է��� ���׿� ���� �ش�
		//1. ������ ���� 0�̸�?  >>  ���� ���� �ʴ´�
		if (cursor[num - 1] <= 0) {
			printf("%d �� ������ �̹� �׾����ϴ�. ���� ���� �ʽ��ϴ�.\n", num);
		}
	}

	return 0;
}

void initData() {

	level = 1;	//���� ���� (1-5)
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100;	//������ �� ����(0-100)
	}

}

void printfFishes() {
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elpasedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elpasedTime);
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
		}
	}
}

