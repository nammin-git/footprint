#include <stdio.h>

//��Ģ���� ����

int sum()
{
	int num1;
	int num2;
	
	return num1+num2;
}


int main(void)
{
	int num1, num2;
	
	printf("���� �� ���� �Է��Ͻÿ�.(��� 2 3)");
	scanf("%d %d, &num1, &num2"); 
	
	printf("sum()");
	//printf("%d+%d=%d", num1, num2, sum());
	
	return 0;
}


 //�� 10�� ����ϱ�
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

//x+y+z ��ȯ�ϴ� ���� �ۼ�
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


//fabs ����Լ� ����
double fabs(double f)
{
	return ;
}







