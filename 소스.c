//�迭 ����
#include <stdio.h>

//���� 2. ������ ��������� �ְ����� ����ϱ�
#define SIZE 10


int Avg(int* score);
int Max(int* score);

void main()
{
	//�迭 ����
	int score[SIZE];

	//���� �Է� �޾Ƽ� �迭�� �ϼ��ϱ�
	for (int i = 0; i < SIZE; i++) {
		printf("�л� %d�� ������ �Է��Ͻÿ�(������ 0~100���� �Դϴ�.): ", i + 1);
		scanf_s("%d", &score[i]);

		//0~100���� ���ڰ� �ƴϸ� �ٽ� �Է½�Ű��
		if ((score[i] < 0) || (score[i] > 100)) {
			printf("���ڸ� �߸� �Է��ϼ̽��ϴ�.\n");
			i--;
		}
		else 
			continue;
	}

	printf("\n");
	printf("�л����� ����� %d�̰�, �ְ� ������ %d�� �л��� %d���Դϴ�.\n", Avg(score), Max(score) + 1, score[Max(score)]);

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



//���� 3. �迭 �ȿ��� �����ϱ�
#define SIZE 7

void main()
{
	int arr[SIZE] = { 1,3,5,7,10,15 };
	int num;

	printf("������ ���ڸ� �Է��Ͻÿ�.: ");
	scanf_s("%d", &num);
	
	//�����ϱ�
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

	//Ȯ�ο� ���
	for (int i = 0; i < SIZE; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}



//���� 4. ��� ���� �հ� ���ϱ�
//version 1

void main()
{
	int a[3][5] = {
		{12,56,32,16,98},
		{99,56,34,41,3},
		{65,3,87,78,21}
	};

	//1���� ��
	int sum = 0;

	sum = a[0][0] + a[1][0] + a[2][0];
	printf("1���� �� = %d\n", sum);

	//2���� ��
	sum = a[0][1] + a[1][1] + a[2][1];
	printf("2���� �� = %d\n", sum);

	//3���� ��
	sum = a[0][2] + a[1][2] + a[2][2];
	printf("3���� �� = %d\n", sum);

	//4���� ��
	sum = a[0][3] + a[1][3] + a[2][3];
	printf("4���� �� = %d\n", sum);

	//5���� ��
	sum = a[0][4] + a[1][4] + a[2][4];
	printf("5���� �� = %d\n", sum);

	printf("\n");

	//1���� ��
	sum = a[0][0] + a[0][1] + a[0][2] + a[0][3] + a[0][4];
	printf("1���� �� = %d\n", sum);

	//2���� ��
	sum = a[1][0] + a[1][1] + a[1][2] + a[1][3] + a[1][4];
	printf("2���� �� = %d\n", sum);
	
	//3���� ��
	sum = a[2][0] + a[2][1] + a[2][2] + a[2][3] + a[2][4];
	printf("3���� �� = %d\n", sum);
}


//version 2. �ݺ������� ó��
void main()
{
	int a[3][5] = {
		{12,56,32,16,98},
		{99,56,34,41,3},
		{65,3,87,78,21}
	};

	int sum = 0;

	//1���� ��
	for (int i = 0; i < 3; i++)
		sum += a[i][0];
	
	printf("1���� �� = %d\n", sum);
	sum = 0;

	//2���� ��
	for (int i = 0; i < 3; i++)
		sum += a[i][1];
	
	printf("2���� �� = %d\n", sum);
	sum = 0;

	//3���� ��
	for (int i = 0; i < 3; i++)
		sum += a[i][2];

	printf("3���� �� = %d\n", sum);
	sum = 0;

	//4���� ��
	for (int i = 0; i < 3; i++)
		sum += a[i][3];

	printf("4���� �� = %d\n", sum);
	sum = 0;

	//5���� ��
	for (int i = 0; i < 3; i++)
		sum += a[i][4];

	printf("5���� �� = %d\n\n", sum);
	sum = 0;


	//1���� ��
	for (int i = 0; i < 5; i++)
		sum += a[0][i];

	printf("1���� �� = %d\n", sum);
	sum = 0;

	//2���� ��
	for (int i = 0; i < 5; i++)
		sum += a[1][i];

	printf("2���� �� = %d\n", sum);
	sum = 0;

	//3���� ��
	for (int i = 0; i < 5; i++)
		sum += a[2][i];

	printf("3���� �� = %d\n", sum);
	sum = 0;
}

