#include <stdio.h>

void main(void)
{
	//�ҹ��ڸ� �빮�ڷ� �����ϴ� ���α׷�
	char letter;
	
	while (1) {
		printf("�ҹ��ڸ� �Է��ϼ���: ");
		scanf_s(" %c", &letter, 1); //���鹮�� ����
		
		if (letter == 'Q')
			break;
		else if (letter < 'a' || letter>'z')
			continue;

		letter -= 32;
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n", letter);
	}
	

	//3�� ����� �ɷ����� ���α׷�
	int i;

	for (i = 1; i < 10; i++) {
		if (i % 3 == 0)
			//break;
			continue;
		printf("%d ", i);
	}


	//���� ���ϱ�
	int n, i;
	double pi = 0.0;
	double k = 1.0;

	printf("�ݺ� Ƚ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		pi += 4.0 / k - 4.0 / (k + 2.0);
		k = k + 4.0;
	}

	printf("Pi = %f", pi);
	//�³�? ���� �ٸ�

	
	//���� ���ϱ� 2
	int loop_count;
	double pi = 3.0;
	double k = 2.0;

	printf("�ݺ� Ƚ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &loop_count);

	while (loop_count > 0) {
		if(loop_count%2==1)
			pi += 4.0 / (k * (k + 1.0) * (k + 2.0));
		else
			pi -= 4.0 / (k * (k + 1.0) * (k + 2.0));
		k = k + 2.0;
		loop_count--;
	}

	printf("pi = %.20f\n", pi);


}