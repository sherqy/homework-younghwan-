#include <stdio.h>
#include <stdlib.h>

#define ID_LEN 7
#define NAME_LEN 10

typedef struct {
	int id[ID_LEN];
	char name[NAME_LEN];
	int math;
	int eng;
} STUDENT;

void SHOW(int i, STUDENT* p[]);
void SEARCH(int num, STUDENT* p[]);
void ADD(int a, STUDENT* p[]);

STUDENT* p;

int main() {

	int i, j, num;

	printf("How many student? ");
	scanf("%d", &num);

	p = (STUDENT*)malloc(sizeof(STUDENT) * num);

	for (i = 1; i <= num; i++) {
		printf("Enter data for student No.%d\n", i);
		printf("ID : "); scanf("%d", &p[i].id);
		printf("Name : "); scanf("%s", &p[i].name);
		printf("Math score : "); scanf("%d", &p[i].math);
		printf("English score : "); scanf("%d", &p[i].eng);
		printf("\n");
	}

	printf("\nPress 1 to 'SHOW' the scores.\n");
	printf("Press 2 to 'ADD' a new student.\n");
	printf("Press 3 to 'SEARCH' a new student.\n");
	printf("Press 4 to 'EXIT'\n");
	scanf("%d", &j);

	switch (j) {
	case 1:
		SHOW(num, &p[num]);
		break;
	case 2:
		ADD(num, &p[num]);
		break;
	case 3:
		SEARCH(num, &p[num]);
		break;
	case 4:
		printf("Bye\n");
		break;
	}

	free(p);
}
void SHOW(int num, STUDENT* p[]) {

	int i;

	printf("----------------------------------------------------------------------------------\n");
	printf("STUDENT ID\t\tNAME\t\tMATH SCORE\t\tENGLISH SCORE\t\tAVERAGE SCORE\n");
	for (i = 0; i < num; i++)
		printf("%d\t\t%s\t\t%d\t\t%d\t\t%d\n", (*p[i]).id, (*p[i]).name, (*p[i]).math, (*p[i]).eng, ((*p[i]).math + (*p[i]).eng) / 2);

	printf("----------------------------------------------------------------------------------\n");
}
void ADD(int a, STUDENT* p[]) {

	a += 1;

	p = (STUDENT*)realloc(p, a * sizeof(STUDENT));

	printf("Enter data for new student.\n");
	printf("ID : "); scanf("%d", &p[a]->id);
	printf("Name : "); scanf("%s", &p[a]->name);
	printf("Math score : "); scanf("%d", &p[a]->math);
	printf("English score : "); scanf("%d", &p[a]->eng);

	printf("\n");

	SHOW(a, &p[a]);
}
void SEARCH(int num, STUDENT* p[]) {
	int a, i;

	printf("Enter student ID : ");
	scanf_s("%d", &a);

	for (i = 0; i <= num; i++) {
		if ((*p[i]).id == a) {
			printf("ID : %d\n", (*p[i]).id);
			printf("Name : %s\n", (*p[i]).name);
			printf("Math score : %d\n", (*p[i]).math);
			printf("English score : %d\n", (*p[i]).eng);
			printf("Average score : %d\n", ((*p[i]).math + (*p[i]).eng) / 2);
		}
	}
}*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ID_LEN 8
#define NAME_LEN 10

typedef struct{
	char id[ID_LEN];
	char name[NAME_LEN];
	int math;
	int eng;
} STUDENT;

void print_menu();
void show(STUDENT**, int);
void search(STUDENT**, int);
void add(STUDENT**, int);

int main(){
	
	int num = 0, i = 0, menu = 0;

	printf("How many students? ");
	scanf("%d", &num);

	STUDENT** list = NULL;
	
	list = (STUDENT**)malloc(num * sizeof(STUDENT*));

	for( i = 0; i < num; i++)
		list[i] = (STUDENT*)malloc(sizeof(STUDENT));

	for(i = 0; i < num; i++){
	
		printf("Enter data for student No.%d\n", i + 1);
	
		printf("ID : ");
		scanf("%s", list[i]->id);
	
		printf("Name : ");
		scanf("%s", (*(list + i))->name);
	
		printf("Math score : ");
		scanf("%d", &(*(list + i))->math);
	
		printf("English score : ");
		scanf("%d", &(*(list + i))->eng);
	
		printf("\n");
	}

	while(1){
		
		print_menu();
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				show(list, num);
				break;
			case 2:
				list = (STUDENT**)realloc(list, (num + 1) * sizeof(STUDENT*));
				*(list + num++) = (STUDENT*)malloc(sizeof(STUDENT));
				add(list, num);
				show(list, num);
				break;
			case 3:
				search(list, num);
				break;
			case 4:
				for(i = 0; i < num; i++){
					free(*(list + i));
				}
				free(list);
				return 0;
		}
	}
}

void print_menu(){
	
	printf("<Select Menu>\n");
	printf("Press 1 to 'SHOW' the scores.\n");
	printf("Press 2 to 'ADD' a new student.\n");
	printf("Press 3 to 'SEARCH' a student.\n");
	printf("Press 4 to 'EXIT'\n");
	
}

void show( STUDENT** list, int num ){
	
	int i = 0;
	double average = 0;

	printf("------------------------------------------------------------------------------------\n");
	printf("STUDENT ID\t NAME\t\tMATH SCORE \t\t ENGLISH SCORE \t\t AVERAGE SCORE\n");
	for(i = 0; i < num; i++){
		average = ((double)(*(list + i))->math + (*(list + i))->eng) / 2;
		printf("%s     \t%s\t\t    %d\t\t\t      %d\t\t\t     %.1f\n", (*(list + i))->id, (*(list + i))->name, (*(list + i))->math, (*(list + i))->eng, average);
	}
	printf("------------------------------------------------------------------------------------\n");
}

void search( STUDENT** list, int num ){
	
	int i = 0;
	double avg = 0;
	char query[ID_LEN] = {0,};

	printf("Enter student ID : ");
	scanf("%s", query);

	for(i = 0; i < num; i++){
		if( !(strcmp(query, (*(list + i))->id)) ){
			avg = ((double)(*(list + i))->math + (*(list + i))->eng) / 2;
			printf("ID : %s\n", (*(list + i))->id);
			printf("Nmae : %s\n", (*(list + i))->name);
			printf("Math score : %d\n", (*(list + i))->math);
			printf("English score : %d\n", (*(list + i))->eng);
			printf("Average score : %lf\n", avg);
		}
	}
}

void add( STUDENT** list, int num ){
	
	printf("Enter data for new student\n");
	printf("ID : ");
	scanf("%s", (*(list + num - 1))->id);
	printf("Name : ");
	scanf("%s", (*(list + num - 1))->name);
	printf("Math score : ");
	scanf("%d", &(*(list + num - 1))->math);
	printf("English score : ");
	scanf("%d", &(*(list + num - 1))->eng);
}
