#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;						//���� ����
	double j, k;

	printf(" input coefficient a, b, c : ");	//a, b, c �Է�
	scanf_s("%d%d%d", &a, &b, &c);
	
	printf(" input coefficient d, e, f : ");	//d, e, f �Է�
	scanf_s("%d%d%d", &d, &e, &f);

	printf(" %dx+%dy+%d=0 \n", a, b, c);		//�� ǥ��
	printf(" %dx+%dy+%d=0 \n", d, e, f);

	j = ((c * d) - (a * f)) / ((a * e) - (b * d));	//��� ��(������ �ٲ�� ���׿�.)
	k = ((b * f) - (c * e)) / ((a * e) - (b * d));

	printf(" Root is (%lf, %lf).", k, j);		//��ǥ�� �ظ� ǥ���߽��ϴ�.

	return 0;
}