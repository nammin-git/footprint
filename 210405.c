#include <stdio.h>

//사칙연산 계산기

int sum()
{
	int num1;
	int num2;
	
	return num1+num2;
}


int main(void)
{
	int num1, num2;
	
	printf("숫자 두 개를 입력하시오.(얘시 2 3)");
	scanf("%d %d, &num1, &num2"); 
	
	printf("sum()");
	//printf("%d+%d=%d", num1, num2, sum());
	
	return 0;
}


 //별 10개 출력하기
int main(void)
{
	int i;
	for (i=0; i<10; i++)
	printf("*");
	
	return 0;
} 


void print_star()
{
	int i;
	for(i=0; i<10; i++)
	printf("*");
}

int main(void)
{
	print_star();
	print_star();
	print_star();
	print_star();
	print_star();
	print_star();
	print_star();
	print_star();
	print_star();
	print_star();
	print_star();
	
	return 0;
}

//x+y+z 반환하는 문장 작성
int add_triple(int x, int y, int z)
{
	return x+y+z;
}

int main(void)
{
	int x=1;
	int y=3;
	int z=5;
	
	printf("%d", add_triple(x, y, z));

	
	return 0;
}


//fabs 헤더함수 정의
double fabs(double f)
{
	return ;
}







