#include <stdio.h>

int main(void)
{
	//Programming_1
	
	float data1; //double �ϴϱ� �̻��ϰ� ����

	printf("�Ǽ��� �Է��Ͻʽÿ�: ");
	scanf_s("%f", &data1);

	printf("�Ǽ��������δ� %f�Դϴ�.\n", data1);
	printf("�����������δ� %e�Դϴ�.\n\n", data1);


	//Programming_2
	int data2;

	printf("16���� ������ �Է��Ͻÿ�: ");
	scanf_s("%x", &data2);

	printf("8�����δ� %o�Դϴ�.\n", data2);
	printf("10�����δ� %d�Դϴ�.\n", data2);
	printf("16�����δ� %x�Դϴ�.\n\n", data2);
	

	//Programming_3
	int x = 10;
	int y = 20;
	int tmp;

	printf("x=%d y=%d\n", x, y);
	
	tmp = x;
	x = y;
	y = tmp; //�̷��� �ϴ°� �³�?�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�

	printf("x=%d y=%d\n\n", x, y);


	//Programming_4
	double length, width, height;
	double volumn;

	printf("������ ����, ����, ���̸� �� ���� �Է�: ");
	scanf_s("%lf %lf %lf", &length, &width, &height);

	volumn = length * width * height;

	printf("������ ���Ǵ� %f�Դϴ�.", volumn);


	//Programming_5
	const double SQMETER_PER_PYEONG = 3.3058;
	
	int p;
	double sqmeter;

	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &p);

	sqmeter = p * SQMETER_PER_PYEONG;

	printf("%f�������Դϴ�.", sqmeter);
	


	//Programming_6
	float num1 = 3.32e-3;
	float num2 = 9.76e-8;
	float sum;

	sum = num1 + num2;

	printf("%f", sum);
	

	//Programming_7
	double m, v, E;

	printf("����: ");
	scanf_s("%lf", &m);
	printf("�ӵ�: ");
	scanf_s("%lf", &v);

	E = m * v * v / 2.0;

	printf("�������: %lf", E);


	//Programming_8
	printf("%c %c %c", 'a' + 1, 'a' + 2, 'a' + 3);


	//Programming_9
	char beep = '\a';
	printf("%c", beep);
	printf("(�溸��)ȭ�簡 �߻��Ͽ����ϴ�.\n");
	printf("%c", beep); //�溸���� ���� �︮���� �ʴ´� �ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�


	//Programming_10
	printf("\"ASCII code\",\'a\',\'b\'.\'c,\n");
	printf("\\t \\a \\n");

	return 0;
}