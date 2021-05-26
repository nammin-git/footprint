#include <stdio.h>

void f1();
void f2();
void f3();
void f4();
int sum(int n);
int recursive(int n);
int r(int n);

int i;
int n = 20;

void main(void)
{
	//프로그램의 출력을 쓰시오
	//###############
	for (i = 0; i < 3; i++)
		f1();
	//실제 출력은 #####
	//?????
	

	//프로그램의 출력을 쓰시오
	//n=10
	f2(n);
	printf("\n\nn=%d\n", n);
	//실제 출력은 20
	//?????


	//프로그램의 출력을 쓰시오
	//x = 3; x = 2;
	int x = 2;
	{
		int x = 3;
		printf("\n\n%d\n", x);
	}
	printf("%d\n", x);


	//프로그램의 출력을 쓰시오
	//0; 1;
	f3();
	f3();
	//static int라서 변수 저장됨

	f4();
	f4();
	//0; 0;


	//sum(5)
	printf("%d\n", sum(5));


	//recursive(5)
	printf("%d\n", recursive(5));


	//반복구조를 비순환적 프로그램으로 바꾸기
	int i, n, result = 1;

	n = 5;

	for (i = 1; i <= n; i++)
		result += i;

	printf("result=%d\n", result);

	printf("==========\n");

	printf("r(%d)=%d\n", n, r(n));
}

//##### 함수
void f1() {
	for (i = 0; i < 5; i++)
		printf("#");

}

void f2() {
	n = 20;
}

void f3() {
	static int count = 0;
	printf("%d\n", count++);
}

void f4() {
	int count = 0;
	printf("%d\n", count++);
}

int sum(int n) {
	printf("%d\n", n);
	if (n < 1)
		return 1;
	else
		return n + sum(n - 1);

}

int recursive(int n) {
	printf("%d\n", n);
	if (n < 1)
		return 2;
	else
		return 2 * recursive(n - 1) + 1;
}

int r(int n) {
	if (n == 0)
		return 1;
	else
		return n + r(n - 1);
}
#include <stdio.h>

void f1();
void f2();
void f3();
void f4();
int sum(int n);
int recursive(int n);
int r(int n);

int i;
int n = 20;

void main(void)
{
	//프로그램의 출력을 쓰시오
	//###############
	for (i = 0; i < 3; i++)
		f1();
	//실제 출력은 #####
	//?????
	

	//프로그램의 출력을 쓰시오
	//n=10
	f2(n);
	printf("\n\nn=%d\n", n);
	//실제 출력은 20
	//?????


	//프로그램의 출력을 쓰시오
	//x = 3; x = 2;
	int x = 2;
	{
		int x = 3;
		printf("\n\n%d\n", x);
	}
	printf("%d\n", x);


	//프로그램의 출력을 쓰시오
	//0; 1;
	f3();
	f3();
	//static int라서 변수 저장됨

	f4();
	f4();
	//0; 0;


	//sum(5)
	printf("%d\n", sum(5));


	//recursive(5)
	printf("%d\n", recursive(5));


	//반복구조를 비순환적 프로그램으로 바꾸기
	int i, n, result = 1;

	n = 5;

	for (i = 1; i <= n; i++)
		result += i;

	printf("result=%d\n", result);

	printf("==========\n");

	printf("r(%d)=%d\n", n, r(n));
}

//##### 함수
void f1() {
	for (i = 0; i < 5; i++)
		printf("#");

}

void f2() {
	n = 20;
}

void f3() {
	static int count = 0;
	printf("%d\n", count++);
}

void f4() {
	int count = 0;
	printf("%d\n", count++);
}

int sum(int n) {
	printf("%d\n", n);
	if (n < 1)
		return 1;
	else
		return n + sum(n - 1);

}

int recursive(int n) {
	printf("%d\n", n);
	if (n < 1)
		return 2;
	else
		return 2 * recursive(n - 1) + 1;
}

int r(int n) {
	if (n == 0)
		return 1;
	else
		return n + r(n - 1);
}
