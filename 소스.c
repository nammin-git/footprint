#include <stdio.h>

double get_pc_temp();

void main(void)
{
	double temperature;
	temperature = get_pc_temp();

	if (temperature >= 50)
		printf("�����Ǿ����ϴ�.\n");
	
}

double get_pc_temp() {
	printf("get_pc_temp()�� ȣ��Ǿ����ϴ�.\n");
	return 49.0;
}
