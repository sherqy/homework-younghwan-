#include <stdio.h>

int main()
{
	int a, x, y, z;								//��������

	printf(" Enter 3-digit number : ");			//�����Է�
	scanf_s("%d", &a);

	x = a / 100;								//�ڸ��� ���� �� ǥ���ϱ�
	a = a % 100;
	y = a / 10;
	a = a % 10;
	z = a;

	printf(" First digit : %d \n", x);			//���� ��Ÿ����
	printf(" Second digit : %d \n", y);
	printf(" Third digit : %d \n", z);

	return 0;
}