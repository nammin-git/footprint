#include <stdio.h>

void main(void)
{
	//Programming 문제
	//1. 자음 모음 구별 프로그램
	char ch;

	printf("문자를 입력하시오: ");
	scanf_s("%c", &ch, 1);

	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("모음입니다.\n");
			break;
		default:
			printf("자음입니다.\n");
			break;
	}


	//2. 첫 번째 수가 두 번째 수의 약수인지 알려주는 프로그램
	int num1, num2;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num1);
	printf("정수를 입력하시오: ");
	scanf_s("%d", &num2);

	if ((num1 % num2) == 0)
		printf("약수입니다.\n");
	else
		printf("약수가 아닙니다.\n");


	//3. 가장 작은 값을 찾아내는 프로그램
	int num1, num2, num3;

	printf("세 개의 정수를 입력하시오: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	
	//else if 사용
	if ((num1 < num2) && (num1 < num3))
		printf("제일 작은 정수는 %d입니다.", num1);
	else if ((num2 < num1) && (num2 < num3))
		printf("제일 작은 정수는 %d입니다.", num2);
	else
		printf("제일 작은 정수는 %d입니다.", num3);

	//if 와 else 만 사용
	if (num1 < num2)
		if (num1 < num3)
			printf("제일 작은 정수는 %d입니다.", num1);
		else
			printf("제일 작은 정수는 %d입니다.", num3);
	else
		if (num2 < num3)
			printf("제일 작은 정수는 %d입니다.", num2);
		else
			printf("제일 작은 정수는 %d입니다.", num3);


	//4. 가위바위보 게임
	?


	//5. 롤러코스터에 타도 됩니까?
	int height, age;

	printf("키를 입력하시오(cm): ");
	scanf_s("%d", &height);
	printf("나이를 입력하시오: ");
	scanf_s("%d", &age);

	if ((height >= 140) && (age >= 10))
		printf("타도 좋습니다.");
	else
		printf("탈 수 없습니다.");
}