#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define CURRENT_BALANCE 10000;

//���� ���¿��� �����ϰ� �����ϴ� ���α׷�

void save(int amount);
void draw();

int amount;
int current_balance = CURRENT_BALANCE;

void main()
{
	int menu;
	
	while(1){
		printf("�޴��� �����ϼ���. ����(1), ����(2) ����(3): ");
		scanf_s("%d", &menu);

		if (menu == 1) {
			printf("������ �ݾ�: ");
			scanf_s("%d", &amount);
			save(amount);
		}
		else if (menu == 2) {
			draw();
		}
		else if (menu == 3) {
			printf("���α׷��� �����մϴ�.");
			break;
		}
		else {
			printf("\n�ٽ� �������ּ���.\n\n\n");
			continue;
		}
	}
}

void save(int amount) {
	Sleep(500);
	printf("\n���� �ܾ��� %d�Դϴ�.\n", current_balance);

	Sleep(500);
	printf("\n%d���� �����մϴ�.\n���� �� �ܰ�� %d���Դϴ�.\n\n\n", amount, amount + current_balance);

	current_balance += amount;
}


void draw() {
	int withdrawal;

	Sleep(500);
	printf("\n���� �ܾ��� %d�Դϴ�.\n", current_balance);
	printf("�󸶸� �����Ͻðڽ��ϱ�? ");
	scanf_s("%d", &withdrawal);

	Sleep(500);
	printf("\n%d���� �����մϴ�.\n���� �� �ܰ�� %d���Դϴ�.\n\n\n", withdrawal, current_balance - withdrawal);
}

