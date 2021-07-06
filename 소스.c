//간접참조 *
#include <stdio.h>

void main()
{
	//int* p = 10000;

	//변수와 포인터를 연결한 후
	//변수의 주소와 포인터의 값을 출력
	int i = 3000;
	int* p = NULL;

	p = &i;

	printf("변수 직접 참조\n");
	printf("i = %d\n", i);
	printf("&i = %u\n", &i);

	printf("--------------\n");
	printf("포인터를 이용한 간접 참조\n");
	printf("*p = %d\n", *p);
	printf("p = %u\n", p);

}

