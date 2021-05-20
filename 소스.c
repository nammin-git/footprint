#include <stdio.h>
#include <stdlib.h>

#define MY_ID 5678
#define MY_PW 7890

#define SUCCESS 1
#define FAIL 2
#define LIMIT 3

int check(int id, int password);

void sub();

int main(void)
{
	//범위 - 지역 변수
	int i = 0;
	
	for (i = 0; i < 5; i++) {
		int temp = 1;
		printf("temp = %d\n", temp);
		temp++; //중괄호는 블록 -> 지역 변수 temp는 매번 새로 시작
	}

	printf("\n===============\n");

	while (i < 10) {
		int temp = 0;
		printf("temp = %d\n", temp);
		temp++; //마찬가지
		i++;
	}


	//범위 - 전역 변수


	//생존 시간 - auto


	//생존 시간 - static
	int i;

	for (i = 0; i < 3; i++) {
		sub();
	}


	//생존 시간 - register
	register int i;
	register int sum = 0;

	for (i = 0; i < 100; i++) {
		sum += i;
		printf("%d\n", sum);
	}


	//생존 시간 - extern


	//로그인 횟수 제한하기
	//first try
	int count = 0;

	while (count < 3) {
		static int id, pw;
		printf("id: ");
		scanf_s("%d", &id);
		printf("pass: ");
		scanf_s("%d", &pw);

		if ((id == MY_ID) && (pw == MY_PW)) {
			printf("로그인 성공\n");
			break;
		}

		count++;
	}
	
	if (count == 3)
		printf("횟수 초과\n");


	//로그인 횟수 제한하기
	//second try
	int id, password, result;

	while (1) {
		printf("id: ____\b\b\b\b");
		scanf_s("%d", &id);
		printf("pw: ____\b\b\b\b");
		scanf_s("%d", &password);

		result = check(id, password);

		if (result == SUCCESS)
			break;
		else
			printf("다시 시도해주세요.\n\n");
	}

	printf("로그인 성공\n");
}

void sub() {
	int auto_count = 0;
	static int static_count = 0;

	auto_count++;
	static_count++;

	printf("auto_count=%d\n", auto_count);
	printf("static_count=%d\n\n", static_count);
}

int check(int id, int password) {
	static int super_id = 1234;
	static int super_password = 5678;
	static int try_count = 0;

	try_count++;

	if (try_count >= LIMIT) {
		printf("횟수 초과\n");
		exit(1);
	}
	
	if ((id == super_id) && (password == super_password))
		return SUCCESS;
	else
		return FAIL;
}
