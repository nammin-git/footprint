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
	//���� - ���� ����
	int i = 0;
	
	for (i = 0; i < 5; i++) {
		int temp = 1;
		printf("temp = %d\n", temp);
		temp++; //�߰�ȣ�� ��� -> ���� ���� temp�� �Ź� ���� ����
	}

	printf("\n===============\n");

	while (i < 10) {
		int temp = 0;
		printf("temp = %d\n", temp);
		temp++; //��������
		i++;
	}


	//���� - ���� ����


	//���� �ð� - auto


	//���� �ð� - static
	int i;

	for (i = 0; i < 3; i++) {
		sub();
	}


	//���� �ð� - register
	register int i;
	register int sum = 0;

	for (i = 0; i < 100; i++) {
		sum += i;
		printf("%d\n", sum);
	}


	//���� �ð� - extern


	//�α��� Ƚ�� �����ϱ�
	//first try
	int count = 0;

	while (count < 3) {
		static int id, pw;
		printf("id: ");
		scanf_s("%d", &id);
		printf("pass: ");
		scanf_s("%d", &pw);

		if ((id == MY_ID) && (pw == MY_PW)) {
			printf("�α��� ����\n");
			break;
		}

		count++;
	}
	
	if (count == 3)
		printf("Ƚ�� �ʰ�\n");


	//�α��� Ƚ�� �����ϱ�
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
			printf("�ٽ� �õ����ּ���.\n\n");
	}

	printf("�α��� ����\n");
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
		printf("Ƚ�� �ʰ�\n");
		exit(1);
	}
	
	if ((id == super_id) && (password == super_password))
		return SUCCESS;
	else
		return FAIL;
}
