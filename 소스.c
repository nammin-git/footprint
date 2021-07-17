#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define BOTTLE 4

int GetTreatment();
int GetRandomBottle(int count, int treatment);

void main()
{
	printf("\n\n === �ƺ��� ��Ӹ� ���� ===\n\n");
	Sleep(1000);
	printf("��Ӹ��� �ƺ��� ���� �߸����� ã���ּ��� !!\n\n\n");
	Sleep(1000);

	//�߸��� �����ϱ�
	srand((unsigned)time(NULL));
	int treatment=GetTreatment(BOTTLE);

	//������ �Ӹ��� �Ѹ��� �Ӹ��� ������ �ƴ����� ���ϴ�(3�� ����)
	//������ ������ ����
	printf("�ϴ� �Ӹ��� ������ �ѷ����Կ�.\n\n");

	for (int i = 1; i <= 3; i++) {
		printf("%d ȸ �õ�\n\n", i);
		if (GetRandomBottle(i, treatment) == 0) {
			printf("�Ӹ��� �����!\n\n");
		}
		else {
			printf("�Ӹ��� ���� �ʾҾ��.\n\n");
		}
		printf("... ����Ϸ��� ���� Ű�� �����ּ��� ...\n\n");
		getchar();
	}

	//�߸��� ã��
	int answer;

	printf("==================\n���� �߸����� ã�ƺ��ô�.\n");
	printf("�߸����� �� �� ���Դϱ�?\n");
	scanf_s("%d", &answer);

	if (answer == treatment + 1) {
		printf("\n\n >> ���� !\n�����մϴ� ! �߸����� ã�ҽ��ϴ� !!\n");
	}
	else {
		printf("\n\n >> �� !\n�߸����� %d �� ���̾����ϴ� !\n�ƺ��� ��� ��Ӹ��� ������ �մϴ� ...", treatment + 1);
	}


}

int GetTreatment() {
	//�߸����� �������� �����մϴ�
	return rand() % BOTTLE;
}


int GetRandomBottle(int count, int treatment) {
	//������ �߸����� �����մϴ�
	int selectedBottle, prevSelectedBottle = 0;
	int isIncluded = 0;

	printf("���õ� ���� ");
	for (int j = 0; j < count; j++) {
		selectedBottle = 1 + rand() % BOTTLE;
		if (prevSelectedBottle == selectedBottle) {
			j--;
			continue;
		}

		printf("%d ", selectedBottle);

		if (selectedBottle == treatment + 1) {
			isIncluded++;
		}

		prevSelectedBottle = selectedBottle;
	}
	printf("�Դϴ�.\n�Ӹ��� �ѷȴ��� ");

	return isIncluded;
}

