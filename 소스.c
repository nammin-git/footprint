#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define CURRENT_BALANCE 10000;

//은행 계좌에서 저축하고 인출하는 프로그램

void save(int amount);
void draw();

int amount;
int current_balance = CURRENT_BALANCE;

void main()
{
	int menu;
	
	while(1){
		printf("메뉴를 선택하세요. 저축(1), 인출(2) 종료(3): ");
		scanf_s("%d", &menu);

		if (menu == 1) {
			printf("저축할 금액: ");
			scanf_s("%d", &amount);
			save(amount);
		}
		else if (menu == 2) {
			draw();
		}
		else if (menu == 3) {
			printf("프로그램을 종료합니다.");
			break;
		}
		else {
			printf("\n다시 선택해주세요.\n\n\n");
			continue;
		}
	}
}

void save(int amount) {
	Sleep(500);
	printf("\n현재 잔액은 %d입니다.\n", current_balance);

	Sleep(500);
	printf("\n%d원을 저축합니다.\n저축 후 잔고는 %d원입니다.\n\n\n", amount, amount + current_balance);

	current_balance += amount;
}


void draw() {
	int withdrawal;

	Sleep(500);
	printf("\n현재 잔액은 %d입니다.\n", current_balance);
	printf("얼마를 인출하시겠습니까? ");
	scanf_s("%d", &withdrawal);

	Sleep(500);
	printf("\n%d원을 인출합니다.\n인출 후 잔고는 %d원입니다.\n\n\n", withdrawal, current_balance - withdrawal);
}

