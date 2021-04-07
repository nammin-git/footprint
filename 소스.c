#include <stdio.h>

int add(int x, int y)
{
	return (x + y);
}

int main(void)
{
	int sum;

	sum = add(2, 3);
	printf("%d\n", sum);

	sum = add(5, 6);
	printf("%d\n", sum);

	return 0;
}