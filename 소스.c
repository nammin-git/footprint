//포인터
#include <stdio.h>

void main()
{
	//주소연산자 &
	int i = 10;
	char c = 69;
	double f = 12.3;

	printf("i의 주소 = %u\n", &i);
	printf("c의 주소 = %u\n", &c);
	printf("f의 주소 = %u\n", &f);


	//어떤 자료형을 가리키는 포인터
	char* pc;
	float* pf;
	double* pd;
}

int main()
{
	int i = 0;
	int* p = &i;

	printf("i의 주소 = %u\n", p);

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


//포인터를 선언하고 변수의 주소를 포인터에 대입하기
void main()
{
	int i = 10;
	double f = 12.3;
	int* pi = NULL;		//NULL은 주소 0
	double* pf = NULL;

	pi = &i;
	pf = &f;

	printf("%u %u\n", pi, &i);
	printf("%u %u\n", pf, &f);

}


