//반복문 문제
#include <stdio.h>

//8번 문제
//정수를 합산하는 프로그램
/*for문 사용
void main()
{
	int n, sum = 0;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	if (n == 0)
		printf("0\n");
	else if (n < 0) {
		for (int i = 2 * n; i <= n; i++) {
			if (i == 2 * n) {
				sum += i;
				printf("(%d)", i);
			}
			else {
				sum += i;
				printf(" + (%d)", i);
			}
		}
		printf(" = %d", sum);
	}
	else {
		for (int i = n; i <= 2 * n; i++) {
			if (i == n) {
				sum += i;
				printf("%d", i);
			}
			else {
				sum += i;
				printf(" + %d", i);
			}
		}
		printf(" = %d", sum);
	}
}
*/

/*while문 사용*/
void main()
{
	int n, sum = 0;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	if (n == 0)
		printf("0\n");
	else if (n < 0) {
		int i = 2 * n;
		while (i <= n) {
			if (i == 2 * n) {
				sum += i;
				printf("(%d)", i);
			}
			else {
				sum += i;
				printf(" + (%d)", i);
			}
			i++;
		}
		printf(" = %d", sum);
	}
	else {
		int i = n;
		while (i <= 2*n) {
			if (i == n) {
				sum += i;
				printf("%d", i);
			}
			else {
				sum += i;
				printf(" + %d", i);
			}
		i++;
		}
		printf(" = %d", sum);
	}
}




