#include <stdio.h>
#include <math.h>

int main() {

	int num1, num2;
	char op;

	puts(" * 간단 계산기 * ");

	printf("첫번째 수 : ");
	scanf_s("%d", &num1);

	printf(" [+, -, *, /] : ");
	while (getchar() != '\n');
	op = getchar;

	printf("두번째 수 : ");
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
		printf("%c라는 연산자는 없습니다. \a\a", op);

	puts("천천히 반복하며 실행해 보세요. ");
	puts("여러가지 형식으로 변형하여 보세요. ");

	return 0;
}