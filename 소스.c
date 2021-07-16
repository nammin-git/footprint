#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define BOTTLE 4

void main()
{
	srand((unsigned)time(NULL));

	printf("\n\n === �ƺ��� ��Ӹ� ���� === \n\n");

	int answer;
	int treatment = rand() % BOTTLE;
	int isIncluded = 0;
	int hint = 0;
	char blank = 0;

	//�߸��� ã�� �õ� 
	for (int i = 1; i <= 3; i++) {
		//1�� �õ� (���� �ϳ� �Է� ����)
		printf("�߸����� ã�ƺ��ô�\n���� %d ���� �Է��ϼ���(���ڵ� ���̴� ����): ", i);

		int j = 0;
		do {
			scanf_s("%d", &hint);
			if (hint == treatment) {
				isIncluded++;
			}
			j++;
		} while (j <= i);
		scanf_s("%c", &blank, 1);
	}


	//�߸��� ����
	printf("�߸����� �����ϼ���: ");
	scanf_s("%d", answer);

	if (answer == treatment + 1) {
		printf(" >> ���� ! �߸����� ã�ҽ��ϴ�.\n �����ؿ� !! �Ӹ��� �ڶ��׿� !\n");
	}
	else {
		printf(" >> �� ! �߸����� %d���Դϴ�...\n�Ӹ��� �ڶ��� �ʾҽ��ϴ٤Ф�\n");
	}


}


int main(void) {
	srand((unsigned)time(NULL));

	printf("\n\n === �ƺ��� ��Ӹ� ���� === \n\n");

	int answer;		//����� �Է°�
	int treatment = rand() % 4;		//�߸��� ���� (0~3)

	int cntShowBottle = 0;	//�̹� ���ӿ� ������ �� ����
	int prevCntShowBottle = 0;	//�� ���ӿ� ������ �� ����
	//�����ִ� �� ������ ���� �÷������ν� ����� ���

	//3���� ��ȸ (3���� �߸��� ���� �õ�)
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0 };	//4���� ��
		do {
			cntShowBottle = rand() % 2 + 2;		//2~3���� ���� �������� ����
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;

		int isIncluded = 0;		//������ �� �߿� �߸����� ���ԵǾ����� ����
		printf(" > %d ��° �õ� : ", i);

		//������ �� ������ ����
		for (int j = 0; j < cntShowBottle; j++) {
			int randBottle = rand() % 4;	//���� �̽��ϴ�

			//���� ���õ��� ���� ���̸� >>>> ���� ó��
			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;
				if (randBottle == treatment) {
					isIncluded = 1;
				}
			}
			//�̹� ���õ� ���̸� >>>> �ߺ��̹Ƿ� �ٽ� ����
			else {
				j--;
			}
		}

		//����ڿ��� ���� ǥ��
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1)
				printf("%d ", k + 1);
		}
		printf("������ �Ӹ��� �ٸ��ϴ�\n");

		if (isIncluded == 1) {
			printf("  >> ����! �Ӹ��� ����� !!\n");
		}
		else {
			printf("  >> ����! �Ӹ��� ���� �ʾҾ��.. �Ф�\n");
		}

		printf("\n ... ����Ϸ��� �ƹ� Ű�� �������� ...");
		getchar();
	}

	printf("\n\n�߸����� �� ���ϱ��? ");
	scanf_s("%d", &answer);

	if (answer == treatment + 1) {
		printf("\n >> �����Դϴ�!\n");
	}
	else
	{
		printf("\n >> �� ! Ʋ�Ⱦ��, ������ %d �Դϴ�!\n", treatment + 1);
	}

}

