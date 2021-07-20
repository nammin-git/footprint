#include <stdio.h>

void Swap(int a, int b);
void Swap_addr(int a, int b);

void main()
{/*
	int arr[3]={5,10,15};

	//*& 는 아무 것도 없는 것과 같다
	//&는 주소, *은 주소의 값
	printf("arr[0] 의 실제 값 : %d\n", &*&*&*&*&*&*arr[0]);
	printf("arr[0] 의 실제 값 : %d\n", arr[0]);
*/

	//SWAP
	//a와 b의 값을 바꾼다
	//값에 의한 복사 (Call by Value) -> 값만 복사함
	int a = 10;
	int b = 20;

	printf("a 의 주소 : %d\n", &a, 1);
	printf("b 의 주소 : %d\n", &b, 1);

	printf("\n\n ... Swap 함수 전 ...\n");
	printf("a : %d, b : %d\n", a, b);

	Swap(a, b);

	printf("\n\n ... Swap 함수 후 ...\n");
	printf("a : %d, b : %d\n", a, b);

	//주소값을 넘기면?

	

}

void Swap(int a, int b) {

	printf("Swap 함수 내 a 의 주소 : %d\n", &a, 1);
	printf("Swap 함수 내 b 의 주소 : %d\n", &b, 1);

	int temp = a;
	a = b;
	b = temp;

	printf("\n\n ... Swap 함수 내 ...\n");
	printf("a : %d, b : %d\n", a, b);

}

