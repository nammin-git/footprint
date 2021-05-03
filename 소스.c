#include <stdio.h>

void main(void)
{
	//반복을 이용한 팩토리얼 구하기 1
	int n, i;
	long fact=1;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
		fact *= i;
	
	printf("%d!은 %d입니다.\n", n, fact);


	//반복을 이용한 팩토리얼 구하기 2
	int n, i = 1;
	long fact = 1;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	while (i <= n)
	{
		fact *= i;
		i++;
	}
	
	printf("%d!은 %d입니다.\n", n, fact);


	//중간점검
	int i;
	for (i = 1; i < 5; i++)
		printf("%d ", 2 * i);
	for (i = 10; i > 0; i = i - 2)
		printf("Student%d\n", i);


	//중첩 for문을 이용하여 *기호로 사각형 모양으로 출력하는 프로그램 1
	int x, y;

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 10; x++)
			printf("*");

		printf("\n");
	}


	//중첩 for문을 이용하여 *기호로 사각형 모양으로 출력하는 프로그램 2
	int x, y;

	for (y = 0; y < 5; y++)
	{

}