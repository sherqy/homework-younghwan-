#include <stdio.h>
#include <math.h>

int main() {

	int num1, num2;
	char op;

	puts(" * ���� ���� * ");

	printf("ù��° �� : ");
	scanf_s("%d", &num1);

	printf(" [+, -, *, /] : ");
	while (getchar() != '\n');
	op = getchar;

	printf("�ι�° �� : ");
	scanf_s("%d", &num2);

	if (op == '+')
		printf("%d + %d = %d", num1, num2, num1 + num2);
	else if (op == '-')
		printf("%d - %d = %d", num1, num2, num1 - num2);
	else if (op == '*')
		printf("%d * %d = %d", num1, num2, num1 * num2);
	else if (op == '/')
		printf("%d / %d = %d", num1, num2, num1 / num2);
	else
		printf("%c��� �����ڴ� �����ϴ�. \a\a", op);

	puts("õõ�� �ݺ��ϸ� ������ ������. ");
	puts("�������� �������� �����Ͽ� ������. ");

	return 0;
}