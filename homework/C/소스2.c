#include <stdio.h>

int main() {
	int Base, Usage;				//���� ����
	float Charge;
	double Tax, Full;

	printf("�����뷮�� �Է��ϼ���.(kw):");	//��뷮 �Է�
	scanf_s("%d", &Usage);

	Base = 660;				//����� ������ ����
	float Cost = 88.5;

	Charge = Base + (Usage * Cost);		//����
	Tax = Charge * 0.09;
	Full = Tax + Charge;

	printf("���� ��� ����� %f�Դϴ�.", Full);		//���

	return 0;
}