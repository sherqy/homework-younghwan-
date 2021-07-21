#include <stdio.h>

int main()
{
	int a, x, y, z;								//변수선언

	printf(" Enter 3-digit number : ");			//숫자입력
	scanf_s("%d", &a);

	x = a / 100;								//자리에 들어가는 수 표현하기
	a = a % 100;
	y = a / 10;
	a = a % 10;
	z = a;

	printf(" First digit : %d \n", x);			//숫자 나타내기
	printf(" Second digit : %d \n", y);
	printf(" Third digit : %d \n", z);

	return 0;
}