#include <stdio.h>
#include <stdlib.h>

void early(int H, int M);

void main(void)
{
	//�˶� �ð� 1
	int H, M;

	scanf_s("%d %d", &H, &M);

	//if ((M >= 0) || (M <= 59))
	//	if ((H >= 0) || (H <= 23))
	if (H != 0)
		if (M >= 45)
			printf("%d %d", H, (M - 45));
		else
			printf("%d %d", (H - 1), (M + 60 - 45));
	else
		if (M >= 45)
			printf("%d %d", (H), (M - 45));
		else
			printf("%d %d", (H + 24 - 1), (M + 60 - 45));


	//�˶� �ð� 2
	int H, M;

	scanf_s("%d %d", &H, &M);
	early(H, M);
}

void early(int H, int M)
{
	if (H != 0)
		if (M >= 45)
			printf("%d %d", H, (M - 45));
		else
			printf("%d %d", (H - 1), (M + 60 - 45));
	else
		if (M >= 45)
			printf("%d %d", H, (M - 45));
		else
			printf("%d %d", (H + 24 - 1), (M + 60 - 45));
}


//��и� ����

void main(void)
{
	int x, y;

	scanf_s("%d", &x);
	scanf_s("%d", &y);

	if ((x != 0) && (y != 0))
		if (x > 0)
			if (y > 0)
				printf("1");
			else
				printf("4");
		else
			if (y > 0)
				printf("2");
			else
				printf("3");
	else
		printf("��и鿡 ������ �ʽ��ϴ�.\n");
}


//����

void main(void)
{
	int year;

	scanf_s("%d", &year);

	if ((year % 4) == 0)
		if ((year % 100) == 0)
			if ((year % 400) == 0)
				printf("1");
			else
				printf("0");
		else
			printf("1");
	else
		printf("0");

}

//���輺�� 91~100 ���� ����
void main(void)
{
	int score;
	int iscore;

	scanf_s("%d", &score);

	(score >= 0) || (score <= 100);

	iscore = (score % 10) + 1;

	switch (iscore)
	{
		

	}
	
}

int MaxNum(int x, int y, int z);
int MinNum(int x, int y, int z);

void main(void)
{
	//�ʱ������� �Ǳ�����
	int wr_test, pf_test;

	printf("�ʱ������� �Ǳ������� �Է����ּ���: ");
	scanf_s("%d %d", &wr_test, &pf_test);

	if ((wr_test >= 90) && (pf_test >= 80))
		printf("�հ��Դϴ�.\n");
	else
		printf("���հ��Դϴ�.\n");


	//���� ���α׷�
	int num1, num2;

	printf("�E���� �� ���� �Է����ּ���: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 != num2)
		if (num1 > num2)
			printf("%d", num1 - num2);
		else
			printf("%d", num2 - num1);

	//ū ���� ���� ���� ����ϱ�
	int num1, num2, num3;

	printf("�� ���� �Է����ּ���: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("Max : %d, Min : %d", MaxNum(num1, num2, num3), MinNum(num1, num2, num3));


}

int MaxNum(int x, int y, int z)
{
	int max;

	if ((x != y) && (x != z))
		if ((x > y) && (x > z))
			max = x;
		else if ((y > x) && (y > z))
			max = y;
		else
			max = z;

	return max;
}

int MinNum(int x, int y, int z)
{
	int min;

	if ((x != y) && (x != z))
		if ((x < y) && (x < z))
			min = x;
		else if ((y < x) && (y < z))
			min = y;
		else
			min = z;

	return min;
}


//���� ��ȯ ���α׷�
char check(int num)
{
	int inum;
	inum = num / 10;

	int result;

	switch (inum){
		case 10:
		case 9:
			result = 'A';
			break;
		case 8:
			result = 'B';
			break;
		case 7:
			result = 'C';
			break;
		case 6:
			result = 'D';
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			result = 'F';
			break;
		default:
			exit(0);
			break;
		}
	

	return result;
}

void main(void)
{
	int num;

	printf("������ �Է����ּ���: ");
	scanf_s("%d", &num);

	printf("%c", check(num));
}


//������ ����

void main(void)
{
	int tag, price;

	printf("�� ���ž��� �Է����ּ���: ");
	scanf_s("%d", &tag);

	if (tag >= 10000)
		if (tag >= 50000)
			if (tag >= 100000)
			{
				price = tag * 0.8;
				printf("100000�� �̻� ���� �ϼż� 20%% ���ε˴ϴ�.\n");
			}
			else
			{ 
				price = tag * 0.9;
				printf("50000�� �̻� ���� �ϼż� 10%% ���ε˴ϴ�.\n");
			}
		else
		{
			price = tag * 0.95;
			printf("100000�� �̻� ���� �ϼż� 5%% ���ε˴ϴ�.\n");
		}

	else
	{
		price = tag;
		printf("10000�� �̸����� �����ϼż� ������ ���� �ʽ��ϴ�.\n");
	}

	printf("������������ %d�Դϴ�.", price);
	

}


//ȸ�� ��޿� ���� ���� ����ϱ�
void main(void)
{
	char membership;

	printf("����� ȸ�� ����� �Է����ּ���: ");
	scanf_s("%c", &membership, 1);

	if (membership == 'N')
		printf("�б� ���� �ο�\n");
	else if (membership == 'S')
	{
		printf("�б� ���� �ο�\n");
		printf("���� ���� �ο�\n");
	}
	else if (membership == 'G')
	{
		printf("�б� ���� �ο�\n");
		printf("���� ���� �ο�\n");
		printf("���� ���� �ο�\n");
	}
	else
		printf("ȸ�� ����� Ȯ���� �� �����ϴ�.\n");
}

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 10; i++) {
		printf("����=%d\n", i);
	}

	for (i = 1; i <= 100; i++) {
		sum = sum + i;
	}

	printf("1-100������ �� = %d", sum);

	return 0;
}


//�Է¹��� ���� �Ҽ��ΰ���?
int isPrime(int n)
{
	int i;
	int result = 0;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			result = 1;
	}
		
	return result;
}

void main(void)
{
	int num;
	int result;

	printf("�Ҽ��ǰ� ���α׷��Դϴ�.\n���� �Է����ּ���: ");
	scanf_s("%d", &num);

	result = isPrime(num);

	if (result == 0)
		printf("%d��(��) �Ҽ��Դϴ�.", num);
	else
		printf("%d��(��) �Ҽ��� �ƴմϴ�.", num);

}

