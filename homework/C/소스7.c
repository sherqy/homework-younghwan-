#include <stdio.h>
#include <math.h>

int main() {
	
	int eng, mat, sci, kor, M;				//���� ����
	float average;

	printf("Input english, math, science, korean scores. : ");			//���� �Է�
	scanf_s("%d%d%d%d", &eng, &mat, &sci, &kor);

	if (eng > 0 && mat >= 0 && sci >= 0 && kor >= 0 && eng <= 100 && mat <= 100 && sci <= 100 && kor <= 100)		//���� ����, �ִ� ã�� �� ���
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

		while (getchar != '\n');			//���־� ��Ʃ��������� ���� �Ŀ� ���� â�� �ٷ� �����ϴ�. ���� ��Ź�帳�ϴ�.
	}
	
	if (eng > 100 || eng <= 0)				//���ǿ� �ȸ��� �� ����ϴ� �Լ�
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