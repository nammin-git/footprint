#include <stdio.h>

/*
//���� ���ϱ�
int square(int n)
{
	return (n * n);
}

int main(void)
{
	int n;

	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &n);
	
	printf("%d�� ������ %d�Դϴ�.", n, square(n));

	return 0;
}


//ū �� ���ϱ�
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main(void)
{
	int x, y;

	printf("���� �� ���� �Է��ϼ���: ");
	scanf_s("%d %d", &x, &y);
	
	printf("�� �� �� ū ���� %d�Դϴ�.", get_max(x, y));

	return 0;
}
*/

void draw_rect(int side)
{
	int x, y;

	for (y = 0; y < side; y++)
	{
		for (x = 0; x < side; x++)
			printf("*");
		printf("\n");
	}
	return;
}

int main(void)
{
	int side;

	scanf_s("%d", &side);
	printf("", draw_rect(side));
}

