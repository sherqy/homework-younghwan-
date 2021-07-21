#include <stdio.h>

int main() {
	int Base, Usage;				//변수 선언
	float Charge;
	double Tax, Full;

	printf("전기사용량을 입력하세요.(kw):");	//사용량 입력
	scanf_s("%d", &Usage);

	Base = 660;				//상수값 변수에 저장
	float Cost = 88.5;

	Charge = Base + (Usage * Cost);		//계산식
	Tax = Charge * 0.09;
	Full = Tax + Charge;

	printf("전기 사용 요금은 %f입니다.", Full);		//출력

	return 0;
}