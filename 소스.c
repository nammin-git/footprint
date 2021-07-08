#include <stdio.h>

void main(void)
{
	//do while
	int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);
	

	//2중 반복문
	for (int i = 0; i <= 3; i++) {
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 0; j <= 5; j++) {
			printf("	두 번째 반복문 : %d\n", j);
		}
	}
}


//이중 반복문 구구단
void main()
{	// 2 x 1 = 2
	// 2 x 2 = 4
	// 2 x 3 = 6
	//...
	// 9 x 9 = 81
	for (int i = 2; i <= 9; i++) {
		printf("%d단 계산\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("   %d x %d = %d\n", i, j, i * j);
		}
	}
}


//별 출력하기
// *
// **
// ***
// ****
// *****

void main()
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i >= j)
				printf("*");
			else
				continue;
		}
		printf("\n");
	}

}

//     *
//    **
//   ***
//  ****
// *****
void main()
{
	for (int i = 1; i <= 5; i++) {
		for (int j = 5; j > 0; j--) {
			if (i < j)
				printf(" ");
			else
				printf("*");
		}
	printf("\n");
	}
}
