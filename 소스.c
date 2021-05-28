#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�ֻ����� ������ ������ ���� ���� Ƚ���� ����ϴ� ���α׷�
void get_dice_face();

//�� ó�� ȣ��Ǵ� ��쿡�� �ʱ�ȭ�� �����ϴ� ���� �Լ� �ۼ��ϱ�
int get_random();

//���Ѽ����� ����ϴ� ��ȯ�Լ�
double infinite_sequence(int n);


void main(void)
{
	//�ֻ��� ������
	//�Լ� ȣ��
	printf("�ֻ��� �����⸦ �����մϴ�.\n");
	printf("1��\t2��\t3��\t4��\t5��\t6��\n");


	//�ֻ��� �����⸦ �ݺ�
	int i = 0;

	while (i<2000) {
		get_dice_face();
		i++;
	}


	//���� ����
	int n;
	
	printf("���� ������ ����ص帳�ϴ�.\n������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	printf("%lf", infinite_sequence(n));
}


void get_dice_face() {
	//�ֻ��� ���� Ƚ���� ������ ���� ���� ����
	static int count;
	count++;

	//�� �鿡 ���� ���� ���� �Ҵ�
	static int one = 0;
	static int two = 0;
	static int three = 0;
	static int four = 0;
	static int five = 0;
	static int six = 0;


	//���� �߻�
	int dice;

	get_random();

	dice = 1 + rand() % 6;

	//���� ���� Ƚ�� ����
	switch (dice) {
	case 1:
		one++;
		break;
	case 2:
		two++;
		break;
	case 3:
		three++;
		break;
	case 4:
		four++;
		break;
	case 5:
		five++;
		break;
	case 6:
		six++;
		break;
	}
	//100ȸ ���� ���� ���� Ƚ�� ���
	if ((count % 100) == 0) {
		if (one < 10)
			printf(" %d %7d %7d %7d %7d %7d\n", one, two, three, four, five, six);
		else
			printf("%d %7d %7d %7d %7d %7d\n", one, two, three, four, five, six);
		//Ƚ���� �ʱ�ȭ�ϰ� ���� �ʴٸ� �ּ� ó���ϸ� ��
		one = 0;
		two = 0;
		three = 0;
		four = 0;
		five = 0;
		six = 0;
	}
}


int get_random() {
	//ȣ�� Ƚ���� �����ϴ� ���� ���� ����
	static int inited = 0;

	if (inited == 0) {
		srand((unsigned)time(NULL));
		inited = 1;
	}
}


//���Ѽ���
double infinite_sequence(int n) {
	if (n <= 1) {
		printf(" %lf\n= ", (float)n);
		return 1.0;
	}
	else {
		printf(" %lf +", 1.0/n);
		return 1.0 / n + infinite_sequence(n - 1);
	}
}
