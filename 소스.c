#include <stdio.h>
#include <math.h>
#include <conio.h>

void main(void)
{
	//�Ǽ��� �������� ���ϴ� ���ѷ���
	double v;

	while (1) {
		printf("�Ǽ����� �Է��Ͻÿ�: ");
		scanf_s("%lf", &v);

		if (v < 0.0)
			break;
		
		printf("%f�� �������� %f�Դϴ�.\n", v, sqrt(v));
	}


	//goto���� ����Ͽ� �ݺ��� ����������
	int x, y;

	for (y = 1; y < 10000; y++) {
		for (x = 1; x < 50; x++) {
			if (_kbhit())
				goto OUT;
			printf("*");
		}
		printf("\n");
	}

	OUT;
	//�� ��


	//continue�� ����ϱ�
	int i;

	for (i = 0; i < 10; i++) {
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}


	//�ҹ��ڸ� �빮�ڷ� �ٲٴ� ���α׷�
	char letter;

	while (1) {
		printf("�ҹ��ڸ� �Է��Ͻÿ�: ");
		scanf_s("%c", &letter, 1);

		if (letter == 'Q')
			break;
		if ((letter < 'a') || (letter > 'z'))
			continue;
		
		letter -= 32;
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n", letter);
	}
	//�ҹ��� �Է¹����� �� �� ����
}