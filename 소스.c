#include <stdio.h>

int main(void)
{
	printf("�̵�����Ʈ�����к�\n2�г�\n�ڿ���\n");

	int x = 123;
	float y = 12.24;
	char z = 'A';

	printf("���� : %d\n", x);
	printf("�Ǽ�: %f\n", y);
	printf("���� : %c\n", z);

	
	int id;

	printf("�й��� �Է����ּ���: ");
	scanf_s("%d", &id);
	printf("����� �й��� %d�Դϴ�.", id);


	
	//�Է¹���

	int id, age;
	char gender;

	printf("�й��� �Է����ּ���: ");
	scanf_s("%d", &id);

	printf("������ �Է����ּ���: ");
	scanf_s("%d", &age);

	while (getchar() != '\n');
	printf("������ �Է����ּ���:(��: m, ��: f) ");
	scanf_s("%c", &gender);

	printf("�й�:%d, ����: %d, ����: %c\n", id, age, gender);

	

	//�������� �̿��� ���α׷�

	int num1, num2, div, rest;

	printf("�� ���� �Է����ּ���: ");
	scanf_s("%d %d", &num1, &num2);

	div = num1 / num2;
	rest = num1 % num2;

	printf("��: %d, ������: %d", div, rest);



	//4�ð� 30���� �ʷ� �ٲٱ�

	int hour, minute, second;

	printf("�ð��� �Է��ϼ���: ");
	scanf_s("%d", &hour);

	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &minute);

	second = hour * 60 * 60 + minute * 60;

	printf("%d�ð� %d���� %d�� �Դϴ�.\n", hour, minute, second);




	//�ʵ� �� ����

	double x = 12.2345678911;
	int y = 10;

	printf("%190d\n", y);
	printf("%-190d\n", y);
	printf("%0900d\n", y);
	printf("%.8lf\n", x);
	
	//����ȯ
	printf("�����κи� ��� x=%d\n", (int)x);
	printf("�Ҽ��κб��� ��� x=%lf\n", (float)y);

	
	//������ ��� ���α׷�

	int _1_ea, _1_price, _2_ea, _2_price, _3_ea, _3_price;
	int total;

	printf("����� ������ ������ �Է��ϼ���: ");
	scanf_s("%d %d", &_1_ea, &_1_price);

	printf("�丶���� ������ ������ �Է��ϼ���: ");
	scanf_s("%d %d", &_2_ea, &_2_price);

	printf("������ ������ ������ �Է��ϼ���: ");
	scanf_s("%d %d", &_3_ea, &_3_price);


	printf("\n\n=================================\n");

	printf("\t������\n");
	printf("��ȣ\tǰ��\t����\t����\t\n");
	printf("1\t���\t%d\t%d\t\n", _1_ea, _1_price);
	printf("2\t�丶��\t%d\t%d\t\n", _2_ea, _2_price);
	printf("3\t����\t%d\t%d\t\n", _3_ea, _3_price);
	
	
	
	printf("\n\n---------------------------------\n");
	
	total = _1_ea * _1_price + _2_ea * _2_price + _3_ea * _3_price;

	printf("���� : %d\n", total);

	printf("=================================");



	return 0;
}