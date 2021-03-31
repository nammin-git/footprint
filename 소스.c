#include <stdio.h>

int main(void)
{
	printf("%e\n\n", 0.123456789);

	//floating.c
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	printf("float�� ũ��=%d\n",sizeof(float));
	printf("double�� ũ��=%d\n", sizeof(double));

	printf("x=%30.25f\n", x);
	printf("y=%30.25f\n\n", y);


	//�ε� �Ҽ��� ���
	double a = 1.23456;
	double b = 2.;
	double c = .28;
	double d = 2e+10;
	double e = 2e-10;
	double f = 9.26E3;
	double g = 0.67e-9;

	printf("%f\n", a);
	printf("%f\n", b);
	printf("%f\n", c);
	printf("%f\n", d);
	printf("%f\n", e);
	printf("%f\n", f);
	printf("%f\n\n", g);

	printf("%.12f\n", e);
	printf("%.12f\n\n", g);


	//����÷ο�
	float x = 1e39;
	printf("x=%e\n", x);

	float x = 1.23456e-38;
	float y = 1.23456e-40;
	float z = 1.23456e-46;

	printf("x = %e\n", x);
	printf("y = %e\n", y);
	printf("z = %e\n", z);


	//������ ��
	double x;
	x = (1.0e20 + 5.0) - 1.0e20;
	printf("%f\n",x);


	//���� ������ ���� ���
	char code;

	code = 65; //���� ����
	printf("%c\n", code);

	code = 'A'; //���� ���
	printf("%c\n", code);


	//char_var.c
	char code1 = 'A';
	char code2 = 65;

	printf("���� ��� �ʱ�ȭ = %c\n", code1);
	printf("�ƽ�Ű �ڵ� �ʱ�ȭ = %c\n", code2);


	//����� ����
	char beep1 = 7;
	printf("%c", beep1);

	char beep2 = '\a';
	printf("%c", beep2); //�ѤѤѤѤѤѤѿ� �� �� �� ������ �� ���� ����?�ѤѤѤѤѤѤѤѤ�


	//escape.c
	int id, pass;
	char beep = '\a';

	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���:\n");
	printf("id: ____\b\b\b\b");
	scanf_s("%d", &id);

	printf("pass: ____\b\b\b\b");
	scanf_s("%d", &pass);

	printf("%c", beep);
	printf("�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.\n", id, pass);
	//�ѤѤѤѤѤѤѤѤ� ���̵�� �н����� ���ڿ��� �����(������ 0���� �����ϴ� ���� �Ұ���) �ѤѤѤѤѤѤѤ�
	//�ѤѤѤѤѤѤѤѤѤѤѤѤѤ� ������� ������ ���庸�� ���� ������ �ϱ� �ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�


	//���������μ� char��
	char code = 'A';

	printf("%d %d %d \n", code, code+1, code+2);
	printf("%c %c %c \n", code, code + 1, code + 2);



	//�ǽ�: �¾�� ���� �ð�
	float v;
	double d;
	double t;

	v = 3.0e5;
	d = 1496e5;
	t = d / v;


	printf("���� �ӵ��� %fkm/s\n", v);
	printf("�¾�� �������� �Ÿ� %fkm\n", d);
	printf("���� �ð��� %f��\n", t);



	return 0;
}