#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;						//변수 선언
	double j, k;

	printf(" input coefficient a, b, c : ");	//a, b, c 입력
	scanf_s("%d%d%d", &a, &b, &c);
	
	printf(" input coefficient d, e, f : ");	//d, e, f 입력
	scanf_s("%d%d%d", &d, &e, &f);

	printf(" %dx+%dy+%d=0 \n", a, b, c);		//식 표현
	printf(" %dx+%dy+%d=0 \n", d, e, f);

	j = ((c * d) - (a * f)) / ((a * e) - (b * d));	//계산 식(순서가 바뀐거 같네요.)
	k = ((b * f) - (c * e)) / ((a * e) - (b * d));

	printf(" Root is (%lf, %lf).", k, j);		//좌표로 해를 표현했습니다.

	return 0;
}