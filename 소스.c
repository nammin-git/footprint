//반복문 문제
#include <stdio.h>

//2번
void main()
{
	int n = 1;
	int sum = 0;
	int result;

	while (n < 100) {
		if (n == 1) {
			result = n;
			sum = result;
			printf("%d + ", n);
		}
		else if (n < 97) {
			result += (n - 2) + n;
			sum += result;
			printf("%d + ", result);
		}
		else {
			result += (n - 2) + n;
			sum += result;
			printf("%d ", result);
		}
		n += 4;
	}

	printf("= %d", sum);
}


//3번
int add();

void main()
{
	add();

	printf("= %d", add());

}

int add() {
	int n = 1;
	int result;
	int sum = 0;

	for (; 2 * n < 100; n += 2) {
		if (n == 1){
			result = 2 * (n + (n + 1));
			printf("%d ", result);
			sum += result;
		}
		else {
			result += 2 * (n + (n + 1));
			printf("+ %d ", result);
			sum += result;
		}

	}

	return sum;
}



//4번
void draw_star();

void main()
{
	draw_star();
}

void draw_star() {
	int x, y;

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 6; x++) {
			if (((x >= 2) && (x <= 3) && (y >= 1) && (y <= 2)))
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}


//6번
void draw_pattern(int num);

void main()
{
	int num;

	printf("7 이상인 홀수를 입력하시오\n");
	scanf_s("%d", &num);

	draw_pattern(num);

}

void draw_pattern(int num) {
	int i, j;
	int cnt = 1;

	for (i = 0; i < num; i++) {
		if(i<num/2)
			for (j = 0; j < num; j++) {
				if (i + j >= num - 1)
					break;
				else
					printf("%d ", cnt);
				cnt++;
			}
		else
			for(j=0; j<num; j++)
		printf("\n");
	}


}


