#include <stdio.h>

void main(void)
{
	//별로 사각형 만들기
	int side, i;
	int j;

	printf("몇 개의 별로 한 변을 만들지 입력하시오: ");
	scanf_s("%d", &side);

	//속이 빈 사각형	
	
	printf("**************\n");
	for (i = 0; i < side; i++)
		printf("*            *\n");
	printf("**************\n");

	//속이 찬 사각형              
	for (i = 0; i < side; i++)
	{
		printf("*");
		for (j = 0; j < side; j++)
			printf("\n*");
	}
	//실패
}