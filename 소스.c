//�ݺ��� ����
#include <stdio.h>

//8�� ����
//������ �ջ��ϴ� ���α׷�
/*for�� ���
void main()
{
	int n, sum = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	if (n == 0)
		printf("0\n");
	else if (n < 0) {
		for (int i = 2 * n; i <= n; i++) {
			if (i == 2 * n) {
				sum += i;
				printf("(%d)", i);
			}
			else {
				sum += i;
				printf(" + (%d)", i);
			}
		}
		printf(" = %d", sum);
	}
	else {
		for (int i = n; i <= 2 * n; i++) {
			if (i == n) {
				sum += i;
				printf("%d", i);
			}
			else {
				sum += i;
				printf(" + %d", i);
			}
		}
		printf(" = %d", sum);
	}
}
*/

/*while�� ���*/
void main()
{
	int n, sum = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	if (n == 0)
		printf("0\n");
	else if (n < 0) {
		int i = 2 * n;
		while (i <= n) {
			if (i == 2 * n) {
				sum += i;
				printf("(%d)", i);
			}
			else {
				sum += i;
				printf(" + (%d)", i);
			}
			i++;
		}
		printf(" = %d", sum);
	}
	else {
		int i = n;
		while (i <= 2*n) {
			if (i == n) {
				sum += i;
				printf("%d", i);
			}
			else {
				sum += i;
				printf(" + %d", i);
			}
		i++;
		}
		printf(" = %d", sum);
	}
}




