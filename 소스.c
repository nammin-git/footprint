//�ݺ��� ����
#include <stdio.h>

//9�� ����
//����� ������ �޿��� ����ϴ� ���α׷�
#define HOUR_SALARY 5500
#define OVERTIME 140

void main()
{
	int work_time;
	int salary = 0;

	printf("�ٹ� �ð��� �Է����ּ���: ");
	scanf_s("%d", &work_time);

	for (int i = 0; i < work_time; i++) {
		if (i < OVERTIME)
			salary += HOUR_SALARY;
		else
			salary += HOUR_SALARY * 1.5;
	}

	printf("���� �޿��� %d�� �Դϴ�.\n", salary);

	float tax_percent;

	if (salary < 800000)
		tax_percent = 0.07;
	else
		tax_percent = 0.1;

	float take_home = 0;
	take_home = salary * (1 - tax_percent);

	printf("���� �޿��� %.0f�� �Դϴ�.\n", take_home);

}