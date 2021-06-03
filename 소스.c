#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define VOTERS 100
#define CANDIDATES 11
#define SIZE 10

//�ּҰ��� ã�� �Լ�
int get_min(int* price);

void main()
{
	//�迭 ����
	int price[SIZE] = { 0 };

	//���� �ʱ�ȭ
	srand((unsigned)time(NULL));

	printf("1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t\n");
	printf("-----------------------------------------------------------------------\n");

	//�迭 �����
	for (int i = 0; i < SIZE; i++) {

		price[i] = rand() % 101;		
	}

	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t\n", price[0], price[1], price[2], price[3], price[4], price[5], price[6], price[7], price[8], price[9]);
	printf("-----------------------------------------------------------------------\n");

	//�ּҰ� ã��
	printf("�ּҰ��� %d�Դϴ�.\n", get_min(price));
	//get_min(price[SIZE])��� �ƴ��� ����
	//�迭 �̸� price�� �޴� ������ �Լ��� ���ǵǾ� �־����Ƿ� �迭 �̸��� ġ�� ��
}

//�ּҰ��� ã�� �Լ�
int get_min(int* price) {
	int i, min;

	for (i = 0; i < SIZE - 1; i++) {
		min = price[i];
		if (price[i + 1] < min)
			return price[i + 1];
		else
			return min;
	}
}


//�ִ밪 ã��
void main()
{
	//�迭 ����
	int prices[SIZE];
	
	printf("------------------------------------------------------------------------------\n");
	printf("1	2	3	4	5	6	7	8	9	10\n");
	printf("------------------------------------------------------------------------------\n");

	//���� �ʱ�ȭ
	srand((unsigned)time(NULL));

	//�迭�� ���� �ֱ�
	for (int i = 0; i < SIZE; i++) {
		prices[i] = rand() % 100 + 1;
		printf("%-7d ", prices[i]);
	}

	printf("\n\n");
	
	int max;
	max = prices[0];

	//�ִ밪 ã��
	for (int i = 0; i < SIZE; i++) {
		if (prices[i] > max)
			max = prices[i];
	}

	//�ִ밪 ����ϱ�
	printf("�ִ밪�� %d�Դϴ�.\n", max);
}



//��ǥ �����ϱ�
//���� ��ǥ���� ���
void main()
{
	int num_candidate = 0;

	//�迭 �����
	int freq[CANDIDATES + 1] = { 0 };
	//�ĺ��ڴ� 1������ �����ϹǷ� 0���� 10������ �迭�� ������ ��

	do {
	printf("�� �� �ĺ��ڸ� �����Ͻðڽ��ϱ�?(����: -1): ");
	scanf_s("%d", &num_candidate);
	freq[num_candidate]++;
	} while (num_candidate > 0);

	//�ĺ� ��ȣ�� ��ǥ ��� ����ϱ�
	printf("��	��ǥ���\n");

	for (int i = 0; i < CANDIDATES; i++) {
		printf("%d	%d\n", i + 1, freq[i]);
	}
}


//��ǥ �����ϱ�
//���� ��ǥ�� 100���� ��ǥ ����� ����
void main()
{
	int num_candidate = 0;

	//�迭 �����
	int freq[CANDIDATES] = { 0 };

	//���� �߻���Ű��
	srand((unsigned)time(NULL));

	//��ǥ���� ǥ�� �ޱ�
	for (int i = 0; i < VOTERS; i++) {
		num_candidate = 1 + rand() % 10;
		freq[num_candidate]++;
	}

	//�ĺ� ��ȣ�� ��ǥ ��� ����ϱ�
	printf("��		��ǥ���\n");

	for (int i = 1; i < CANDIDATES; i++) {
		printf("%d		%d\n", i, freq[i]);
	}

	//��ǥ ��� ���ϱ�
	int elected, j;
	elected = 0;

	for (j = 1; j < CANDIDATES; j++) {
		if (freq[j] > freq[elected])
			elected = j;
	}

	//1�� ����ϱ�
	printf("\n�缱�ڴ� %dǥ�� ���� �ĺ� %d�� �Դϴ�.\n", freq[elected], elected);
}
