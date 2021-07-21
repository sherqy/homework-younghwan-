#include <stdio.h>
#include <stdlib.h>
#define File_Name "data.txt"
#define File "result.txt"

int main() {
	FILE* fp1,* fp2;
	int* a[3] = {0,};
	int i = 0, j = 0, sum_row[3] = {0,}, sum_col[6] = {0,};
	
	for(i = 0; i < 3; i++)
		a[i] = calloc(6, sizeof(int));
	
	fp1 = fopen(File_Name, "r");
	
	if(fp1 == NULL) {
		printf("파일을 열지 못했습니다.");
		exit(1);
	}
	
	for(i = 0; i < 3; i++)
		for(j = 0; j < 6; j++)
			fscanf(fp1, "%d", &a[i][j]);
	
	fclose(fp1);
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 6; j++) {
			printf("%6d", a[i][j]);
			sum_row[i] += a[i][j];
			sum_col[j] += a[i][j];
		}
		printf("\n");
	}
	
	for(i = 0; i < 3; i++)
		printf("sum of row[%d] : %d\n", i, sum_row[i]);
		
	printf("\n");
	
	for(j = 0; j < 6; j++)
		printf("sum of col[%d] : %d\n", j, sum_col[j]);
	
	fp2 = fopen(File, "w");
	
	for(i = 0; i < 3; i++)
		fprintf(fp2, "%6d\n", sum_row[i]);
	
	for(j = 0; j < 6; j++)
		fprintf(fp2, "%6d\n", sum_col[j]);
	
	fclose(fp2);
	
	for(i = 0; i < 3; i++)
		free(a[i]);
	
	return 0;
}
