#include <stdio.h>

//������� �������� �� ���
int draw_star(int N);

//�ϳ��� ž �̵� ����
int recursive(int N);

void main(void)
{
	//���� ���� �� ���� �Է� �ޱ�
	int N;

	printf("������ �����帳�ϴ�.\n3�� �ŵ��������� �Է��Ͻÿ�: ");
	scanf_s("%d", &N);

	//�Լ� ����
	draw_star(N);


	//�ϳ��� ž �̵� ����
	int N;

	printf("������ ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &N);

	printf("\n\n");
	recursive(N);
}

int draw_star(int N) {
	//�ݺ����� �������� ���� ����Ƿ� �ݺ��� ���
	int i, j;

	//N�� 3���� �۾����� ����
	if (N < 3)
		return 0;
	//N�� 3�� �� �⺻ ���� ���
	else if (N == 3) {
		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {
				if ((i == N / 3) && (j == N / 3))
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
		return draw_star(N/3);
	}
	//N�� 3�� �ƴ� �������� ��
	//?????
	else if ((N / 3) % 3 == 0) {
		return draw_star(N/3);
	}
}


int recursive(int N) {
	//�ű� Ƚ���� ������ ���� ���� ����
	static int K;

	//��� �����
	int stick = 1;

	//

	printf("")
}
