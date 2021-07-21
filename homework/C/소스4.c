#include <stdio.h>

int main() 
{
	int h, m, s1, s2;                   //변수 선언
	printf("초를 입력하세요 : ");       //바꾸고 싶은 숫자 입력
	scanf_s("%d", &s1);
	
	s2 = s1 % 60;					    //계산 과정(실습 때 했던 코드가 기억이 안나서 다르게 했어요)
	m = (s1  % (60 * 60) )/60;
	h = s1 / (60 * 60);

	printf("%d초는 %d시간 %d분 %d초입니다.", s1, h, m, s2);		//출력 문장

	return 0;

}