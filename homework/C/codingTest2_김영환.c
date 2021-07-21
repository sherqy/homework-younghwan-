#include <stdio.h>

int main(){
	
	int a, b, i;
	
	scanf("%d%d", &a, &b);
	
	for( i = 0; i < b; i++){
		
		if( a < 100 )
		a = a + a / 10 + a % 10;
		
		else
		a = a + a / 100 + ( a / 10 ) % 10 + a % 10;
		
		printf("%d ", a);
	}
	
	return 0;
}

#include <stdio.h>

int main(){
	
	int i = 0, j = 0;
	char ary[1025] = {'\0'};
	
	scanf("%s", ary);
	
	while(1){
	
		j = 1;
	
		while( ary[i] == ary[i+1] ){
			i++;
			j++;
		}
	
		printf("%c%d", ary[i], j);
	
		if(ary[i+1] == '\0')
		break;
		
		i++;
	}
	
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
	
	int i = 0, j = 0;
	char str1[50], str2[50];

	fgets(str1, 50, stdin);
	printf("\n");
	fgets(str2, 50, stdin);
	printf("\n");
	scanf("%d", &j);
	
	if(strcmp(str1, str2) == 0){
		printf("strings are equal.\n");
		return 0;
	}
	else
		printf("strings are not equal.\n");
		
	if(strncmp(str1, str2, j) == 0)
		printf("\nFirst %d letters are equal.\n", j);
	else
		printf("\nFirst %d letters are not equal.\n", j);
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
	
	int i = 0, j = 0;
	char sen[200] = {'\0'};
	
	fgets(sen, 200, stdin);
	j = strlen(sen);
	
	for(i = 0; i < j; i++){
		printf("\n%c", sen[i]);
		if(sen[i] == ' ')
		printf("\n\n");
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ID_LEN 8
#define NAME_LEN 10
#define PHONE_LEN 12

typedef struct{
	char id[ID_LEN];
	char name[NAME_LEN];
	int grade;
	char phone[PHONE_LEN] ;
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
	
		printf("Grade : ");
		scanf("%d", &(*(list + i))->grade);
	
		printf("Phone number : ");
		scanf("%s", (*(list + i))->phone);
	
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

	printf("--------------------------------------------------------------------------\n");
	printf("STUDENT ID\t NAME\t\tGRADE \t\t PHONE NUMBER\n");
	for(i = 0; i < num; i++)
		printf("%s\t\t %s\t\t  %d\t\t %s\n", (*(list + i))->id, (*(list + i))->name, (*(list + i))->grade, (*(list + i))->phone);
	printf("--------------------------------------------------------------------------\n");
}

void search( STUDENT** list, int num ){
	
	int i = 0;
	char query[ID_LEN] = {0,};

	printf("Enter student ID : ");
	scanf("%s", query);

	for(i = 0; i < num; i++){
		if( !(strcmp(query, (*(list + i))->id)) ){
			printf("ID : %s\n", (*(list + i))->id);
			printf("Nmae : %s\n", (*(list + i))->name);
			printf("Grade : %d\n", (*(list + i))->grade);
			printf("Phone number : %s\n", (*(list + i))->phone);
		}
	}
}

void add( STUDENT** list, int num ){
	
	printf("Enter data for new student\n");

	printf("ID : ");
	scanf("%s", (*(list + num - 1))->id);

	printf("Name : ");
	scanf("%s", (*(list + num - 1))->name);

	printf("Grade : ");
	scanf("%d", &(*(list + num - 1))->grade);

	printf("Phone number : ");
	scanf("%s", &(*(list + num - 1))->phone);
}
