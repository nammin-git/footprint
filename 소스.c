//�迭
#include <stdio.h>

int main()
{

	int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;
	
	printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_1);
	printf("����ö 2ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_2);
	printf("����ö 2ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_3);


	//�迭 ... ���� ���� ������ �Բ�, ���ÿ� ����
	int subway_array[3];

	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", i+1, subway_array[i]);
	}

	//�� ���� ���
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	int arr[]={1,2};	//�ڵ����� arrũ��� 2
	
	int arr[10]={1,2};	//�ʱ�ȭ �� �ϸ� �ڵ����� 0 ���� ����

	//�迭 ũ��� �׻� ����� ����
	int size = 10;
	int arr[size];		//������ ũ�Ⱑ �� ��



	//���� vs ���ڿ�
	char c = 'A';
	printf("%c\n", c);

	//char str[6] = "coding";
	//printf("%s\n", str);	//������ ���� �ν� ����

	//���ڿ� ������ ���� �ǹ��ϴ� NULL���� ��������� ��
	//���ڿ��� NULL���ڴ� \0
	char str[7] = "coding";
	printf("%s\n", str);

	//������ ���� �� ���ָ� �ڵ����� ���� �ǹ��ϴ� ���� �Է�����
	char str[] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));

	//�ѱ��� 1���ڿ� 2 byte
	char kor[] = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	

	//���ڿ� ��ȭ
	//char c_array[7] = { 'c','o','d','i','n','g','\0' };
	char c_array[10] = { 'c','o','d','i','n','g' };
	
	printf("%s\n", c_array);
	
	for (int i = 0; i < sizeof(c_array); i++) {
		printf("%c\n", c_array[i]);
	}
	
	for (int i = 0; i < sizeof(c_array); i++) {
		printf("%d\n", c_array[i]);
	}	

	//���ڿ� �Է¹ޱ�
	char name[256];
	printf("�̸��� �Է��ϼ���: ");
	scanf_s("%s", name, sizeof(name));

	printf("\n�Է¹��� �̸��� %s�Դϴ�.\n", name);

	//�ƽ�Ű �ڵ�
	for (int i = 0; i < 128; i++) {
		printf("�ƽ�Ű�ڵ� ���� %d : %c\n", i, i);
	}

	return 0;
}