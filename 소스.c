//���� 4673
#include <stdio.h>

//�Լ� �����
int d(int n);

//���� �ѹ�
void main()
{
	for (int i = 0; i < 100; i++) {
		if (d(i))
			continue;
		else
			printf("%d\n", i);
	}

}

int d(int n) {
	int result = 0;
	int count = 0;
	
	for (int j = 10000; j > 0; j /= 10) {
		if (n / j == 0)
			continue;
		else
			result += n / j;
	}

	if(result)

	return count;
}


