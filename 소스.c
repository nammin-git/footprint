#include <stdio.h>

void draw_star(int N);
int draw_star(int N);

int i = 1;

void main(void)
{
	//������� �������� �� ���
	int N;

	printf("3�� �ŵ������� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &N);



	while (N / 3 > 1) {
		N = N / 3;
		i++;
	}
	


	//�ϳ��� ž �̵� ����
	int n;

	printf("������ ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);


}

void draw_star(int N) {
	int i, j;

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			if ((i == N / 3 + 1) && (j == N / 3 + 1))
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}


int draw_star(int N) {
	if (N / 3 > 1)
		return draw_star(N / 3);
	else
		return 

}



