//�����Լ�-�迭-�˻�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int arr[10];

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 50 + 1;
	}

	int target, count=0;

	//���� ����
	while (1) {
		printf("ã�� ���ڸ� �Է��Ͻÿ�(��, ���ڴ� 1~50 ������ ���ڿ��� �մϴ�.): ");
		scanf_s("%d", &target);

		if ((target < 1) || (target > 50)) {
			printf("���ڸ� �߸� �Է��ϼ̽��ϴ�.\n");
			continue;
		}

		else
			break;
	}

	//target�� �迭 �ȿ� �ִ��� �˻�
	for (int i = 0; i < 10; i++) {
		if (target == arr[i])
			count++;
	}

	printf("%d�� �迭 �ȿ� %d�� �ֽ��ϴ�.\n", target, count);


}