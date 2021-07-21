/*#include <stdio.h>

void self(int*);

int main(){
	
	int a, b, i;
	int* j = &a;
	
	scanf("%d%d", &a, &b);
	
	for(i = 0; i < b; i++){
	
		self(&a);
		
		printf("%d ", *j);	
	
	}
	
	return 0;
}

void self(int* p){
	
	if(*p < 100)
		*p = *p + *p / 10 + *p % 10;

	else
		*p = *p + *p / 100 + (*p / 10) % 10 + *p % 10;
	
}*/

/*#include <stdio.h>

int main(){
	
	char ary[1025] = {'\0'};
	int i = 0, j = 0;
	
	scanf("%s", ary);
	
	while(ary[i] != '\0'){
	
		while(ary[i] == ary[i + 1]){
			i++;
			j++;
		}
	
		printf("%c%d", ary[i], j + 1);
		j = 0;
		i++;
	}
	return 0;
	
}*/

/*#include <stdio.h>
#include <string.h>

int main(){
	
	int i = 0;
	char str1[50] = {'\0'}; 
	char str2[50] = {'\0'};
	
	fgets(str1, 50, stdin);
	printf("\n");
	
	fgets(str2, 50, stdin);
	printf("\n");
	
	scanf("%d", &i);
	
	if(strcmp(str1, str2) == 0){
		printf("\nStrings are equal.\n");
		return 0;
	}
	else
	printf("\nStrings are not equal.\n");
	
	if(strncmp(str1, str2, i) == 0){
		printf("\nFirst %d letters are equal.\n", i);
	}
	else
	printf("\nFirst %d letters are not equal.\n", i);
	
	return 0;
}*/

/*#include <stdio.h>

int main(){
	
	int i = 0;
	char sen[200] = {'\0'};
	
	fgets(sen, 200, stdin);
	printf("\n");
	
	while(sen[i] != '\0'){
		
		printf("%c", sen[i]);
		if(sen[i] == ' '){
			printf("\n\n");
		}
		i++;
	}
	
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ID_LEN 16
#define NAME_LEN 16
#define PHONE_LEN 16

typedef struct {
	char id[ID_LEN];
	char name[NAME_LEN];
	int grade;
	char phone[PHONE_LEN];
} STUDENT;

void print_menu();
void SHOW(STUDENT**, int);
void SEARCH(STUDENT**, int);
void ADD(STUDENT**, int);

int main() {

	int i, num = 0, menu = 0;
	STUDENT** list = NULL;

	printf("How many student? ");
	scanf("%d", &num);

	list = (STUDENT**)malloc(num * sizeof(STUDENT*));

	for (i = 0; i < num; i++)
		list[i] = (STUDENT*)malloc(sizeof(STUDENT));

	for (i = 0; i < num; i++) {
		printf("Enter data for student No.%d\n", i + 1);

		printf("ID : ");
		scanf("%s", (*(list + i))->id);

		printf("Name : ");
		scanf("%s", (*(list + i))->name);

		printf("Grade : ");
		scanf("%d", &(*(list + i))->grade);

		printf("Phone number : ");
		scanf("%s", (*(list + i))->phone);
	}

	while (1) {

		print_menu();
		scanf("%d", &menu);

		switch (menu) {

		case 1:
			SHOW(list, num);
			break;

		case 2:
			list = (STUDENT**)realloc(list, sizeof(STUDENT*));
			*(list + num++) = (STUDENT*)malloc(sizeof(STUDENT));
			ADD(list, num);
			SHOW(list, num);
			break;

		case 3:
			SEARCH(list, num);
			break;

		case 4:
			for (i = 0; i < num; i++) {
				free(list[i]);
			}
			free(list);
			printf("Bye!");
			return 0;
		}
	}
}

void print_menu() {

	printf("<Select Menu>\n");
	printf("Press 1 to 'SHOW' the scores.\n");
	printf("Press 2 to 'ADD' a new student.\n");
	printf("Press 3 to 'SEARCH' a student.\n");
	printf("Press 4 to 'EXIT'\n");
}

void SHOW(STUDENT** list, int num) {

	int i = 0;

	printf("---------------------------------------\n");
	printf("STUDENT ID\tNAME\tGRADE\tPHONE NUMBER\n");
	for (i = 0; i < num; i++) {
		printf("%s\t\t%s\t%d\t%s\n", (*(list + i))->id, (*(list + i))->name, (*(list + i))->grade, (*(list + i))->phone);
	}
	printf("---------------------------------------\n");
}

void ADD(STUDENT** list, int num) {

	printf("Enter data for new student\n");

	printf("ID : ");
	scanf("%s", (*(list + num - 1))->id);

	printf("Name : ");
	scanf("%s", (*(list + num - 1))->name);

	printf("Grade : ");
	scanf("%d", &(*(list + num -1))->grade);

	printf("Phone number : ");
	scanf("%s", (*(list + num - 1))->phone);
}

void SEARCH(STUDENT** list, int num) {

	int i = 0;
	char ary[ID_LEN];

	printf("Enter student ID : ");
	scanf("%s", ary);

	for (i = 0; i < num; i++) {

		if (strcmp((*(list + i))->id, ary)) {
			printf("ID : %s\n", (*(list + i))->id);
			printf("Name : %s\n", (*(list + i))->name);
			printf("Grade : %d\n", (*(list + i))->grade);
			printf("Phone number : %s\n", (*(list + i))->phone);
		}
	}
}*/
