//������
#include <stdio.h>

void main()
{
	//�ּҿ����� &
	int i = 10;
	char c = 69;
	double f = 12.3;

	printf("i�� �ּ� = %u\n", &i);
	printf("c�� �ּ� = %u\n", &c);
	printf("f�� �ּ� = %u\n", &f);


	//� �ڷ����� ����Ű�� ������
	char* pc;
	float* pf;
	double* pd;
}

int main()
{
	int i = 0;
	int* p = &i;

	printf("i�� �ּ� = %u\n", p);

	return 0;
}


void main()
{
	char c = 'A';
	float f = 36.5;
	double d = 3.141592;

	char* pc = &c;
	float* pf = &f;
	double* pd = % d;
}


//�����͸� �����ϰ� ������ �ּҸ� �����Ϳ� �����ϱ�
void main()
{
	int i = 10;
	double f = 12.3;
	int* pi = NULL;		//NULL�� �ּ� 0
	double* pf = NULL;

	pi = &i;
	pf = &f;

	printf("%u %u\n", pi, &i);
	printf("%u %u\n", pf, &f);

}


