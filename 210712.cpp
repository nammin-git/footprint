// 비밀번호 마스터
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int random_num();
int mul(int n1, int n2);

int count = 0;
int dividant = 10;

int main()
{
	int num1;
	int num2;
	int answer;

	while (1) {
		num1 = random_num();
		num2 = random_num();
	
		printf("%d x %d = ", num1, num2);
		scanf_s("%d", &answer);

		if (mul(num1, num2) == answer) {
			continue;
		}
		else {
			printf("실   패\n");
			printf("...분하다...\n마스터의 자리를 내어줘야 하다니...\n");
			break;
		}
	}
	
	return 0;
}

int random_num() {
	srand((unsigned)time(NULL));

	int num = 1 + rand() % dividant;

	if (count % 2 == 0) {
		dividant +=10;
	}

	count++;

	return num;
}

int mul(int n1, int n2) {
	return n1 * n2;
}

