#include <stdio.h>
#include <stdlib.h>

void early(int H, int M);

void main(void)
{
	//알람 시계 1
	int H, M;

	scanf_s("%d %d", &H, &M);

	//if ((M >= 0) || (M <= 59))
	//	if ((H >= 0) || (H <= 23))
	if (H != 0)
		if (M >= 45)
			printf("%d %d", H, (M - 45));
		else
			printf("%d %d", (H - 1), (M + 60 - 45));
	else
		if (M >= 45)
			printf("%d %d", (H), (M - 45));
		else
			printf("%d %d", (H + 24 - 1), (M + 60 - 45));


	//알람 시계 2
	int H, M;

	scanf_s("%d %d", &H, &M);
	early(H, M);
}

void early(int H, int M)
{
	if (H != 0)
		if (M >= 45)
			printf("%d %d", H, (M - 45));
		else
			printf("%d %d", (H - 1), (M + 60 - 45));
	else
		if (M >= 45)
			printf("%d %d", H, (M - 45));
		else
			printf("%d %d", (H + 24 - 1), (M + 60 - 45));
}


//사분면 고르기

void main(void)
{
	int x, y;

	scanf_s("%d", &x);
	scanf_s("%d", &y);

	if ((x != 0) && (y != 0))
		if (x > 0)
			if (y > 0)
				printf("1");
			else
				printf("4");
		else
			if (y > 0)
				printf("2");
			else
				printf("3");
	else
		printf("사분면에 속하지 않습니다.\n");
}


//윤년

void main(void)
{
	int year;

	scanf_s("%d", &year);

	if ((year % 4) == 0)
		if ((year % 100) == 0)
			if ((year % 400) == 0)
				printf("1");
			else
				printf("0");
		else
			printf("1");
	else
		printf("0");

}

//시험성적 91~100 까지 도전
void main(void)
{
	int score;
	int iscore;

	scanf_s("%d", &score);

	(score >= 0) || (score <= 100);

	iscore = (score % 10) + 1;

	switch (iscore)
	{
		

	}
	
}

int MaxNum(int x, int y, int z);
int MinNum(int x, int y, int z);

void main(void)
{
	//필기점수와 실기점수
	int wr_test, pf_test;

	printf("필기점수와 실기점수를 입력해주세요: ");
	scanf_s("%d %d", &wr_test, &pf_test);

	if ((wr_test >= 90) && (pf_test >= 80))
		printf("합격입니다.\n");
	else
		printf("불합격입니다.\n");


	//뺄셈 프로그램
	int num1, num2;

	printf("뺼셈할 두 수를 입력해주세요: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 != num2)
		if (num1 > num2)
			printf("%d", num1 - num2);
		else
			printf("%d", num2 - num1);

	//큰 수와 작은 수를 출력하기
	int num1, num2, num3;

	printf("세 수를 입력해주세요: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("Max : %d, Min : %d", MaxNum(num1, num2, num3), MinNum(num1, num2, num3));


}

int MaxNum(int x, int y, int z)
{
	int max;

	if ((x != y) && (x != z))
		if ((x > y) && (x > z))
			max = x;
		else if ((y > x) && (y > z))
			max = y;
		else
			max = z;

	return max;
}

int MinNum(int x, int y, int z)
{
	int min;

	if ((x != y) && (x != z))
		if ((x < y) && (x < z))
			min = x;
		else if ((y < x) && (y < z))
			min = y;
		else
			min = z;

	return min;
}


//문자 반환 프로그램
char check(int num)
{
	int inum;
	inum = num / 10;

	int result;

	switch (inum){
		case 10:
		case 9:
			result = 'A';
			break;
		case 8:
			result = 'B';
			break;
		case 7:
			result = 'C';
			break;
		case 6:
			result = 'D';
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			result = 'F';
			break;
		default:
			exit(0);
			break;
		}
	

	return result;
}

void main(void)
{
	int num;

	printf("점수를 입력해주세요: ");
	scanf_s("%d", &num);

	printf("%c", check(num));
}


//할인율 적용

void main(void)
{
	int tag, price;

	printf("총 구매액을 입력해주세요: ");
	scanf_s("%d", &tag);

	if (tag >= 10000)
		if (tag >= 50000)
			if (tag >= 100000)
			{
				price = tag * 0.8;
				printf("100000원 이상 구매 하셔서 20%% 할인됩니다.\n");
			}
			else
			{ 
				price = tag * 0.9;
				printf("50000원 이상 구매 하셔서 10%% 할인됩니다.\n");
			}
		else
		{
			price = tag * 0.95;
			printf("100000원 이상 구매 하셔서 5%% 할인됩니다.\n");
		}

	else
	{
		price = tag;
		printf("10000원 미만으로 구매하셔서 할인이 되지 않습니다.\n");
	}

	printf("최종결제액은 %d입니다.", price);
	

}


//회원 등급에 따른 권한 출력하기
void main(void)
{
	char membership;

	printf("당신의 회원 등급을 입력해주세요: ");
	scanf_s("%c", &membership, 1);

	if (membership == 'N')
		printf("읽기 권한 부여\n");
	else if (membership == 'S')
	{
		printf("읽기 권한 부여\n");
		printf("쓰기 권한 부여\n");
	}
	else if (membership == 'G')
	{
		printf("읽기 권한 부여\n");
		printf("쓰기 권한 부여\n");
		printf("삭제 권한 부여\n");
	}
	else
		printf("회원 등급을 확인할 수 없습니다.\n");
}

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 10; i++) {
		printf("숫자=%d\n", i);
	}

	for (i = 1; i <= 100; i++) {
		sum = sum + i;
	}

	printf("1-100까지의 합 = %d", sum);

	return 0;
}


//입력받은 수가 소수인가요?
int isPrime(int n)
{
	int i;
	int result = 0;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			result = 1;
	}
		
	return result;
}

void main(void)
{
	int num;
	int result;

	printf("소수판결 프로그램입니다.\n수를 입력해주세요: ");
	scanf_s("%d", &num);

	result = isPrime(num);

	if (result == 0)
		printf("%d은(는) 소수입니다.", num);
	else
		printf("%d은(는) 소수가 아닙니다.", num);

}

