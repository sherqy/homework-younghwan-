#include <stdio.h>
#include <math.h>

int main() {
	
	int eng, mat, sci, kor, M;				//변수 생성
	float average;

	printf("Input english, math, science, korean scores. : ");			//변수 입력
	scanf_s("%d%d%d%d", &eng, &mat, &sci, &kor);

	if (eng > 0 && mat >= 0 && sci >= 0 && kor >= 0 && eng <= 100 && mat <= 100 && sci <= 100 && kor <= 100)		//조건 생성, 최댓값 찾기 후 계산
	{
		M = eng;
		average = (eng + mat + sci + kor) / 4.0;

		if (M < mat) {
			M = mat;
		}
		else if (M < sci) {
			M = sci;
		}
		else if (M < kor) {
			M = kor;
		}

		printf("The average before change is %.f \n", roundf(average));
		printf("The average after change is %.f \n", roundf(average / M * 100));

		while (getchar != '\n');			//비주얼 스튜디오에서는 엔터 후에 도스 창이 바로 꺼집니다. 양해 부탁드립니다.
	}
	
	if (eng > 100 || eng <= 0)				//조건에 안맞을 시 출력하는 함수
		printf("English score is wrong. %d\n", eng);
	if (mat > 100 || mat <= 0)
		printf("Math score is wrong. %d\n", mat);
	if (sci > 100 || sci <= 0)
		printf("Science score is wrong. %d\n", sci);
	if (kor > 100 || kor <= 0)
		printf("Korean score is wrong. %d\n", kor);
	
	while (getchar != '\n');
	return 0;	
}