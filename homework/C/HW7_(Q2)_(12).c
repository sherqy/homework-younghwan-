/*#include <stdio.h>

int main(){
	
	FILE *fp = fopen("Mystory.txt", "w");
	
	fputs("#Name : Kim Young Hwan\n", fp);
	fputs("#Age : 20\n", fp);
	fputs("#Phone : 010-7740-4113", fp);
	
	fclose(fp);
	return 0;
}*/
#include <stdio.h>

int main(){
	
	FILE * fw = fopen("c:\\mystory.txt", "wt");
	char input[20];
	puts("* * * mystory * * * \n");
	
	fputs("input name : ", stdout);
	scanf("%s", input);
	fputs("#Name : ", fw);
	fputs(input, fw);
	
	fputs("input age : ", stdout);
	scanf("%s", input);
	fputs("\n#Age : ", fw);
	fputs("input", fw);
	
	fputs("input phone : ", stdout);
	scanf("%s", input);
	fputs("\n#Phone : ", fw);
	
	puts("txt file creation complete");
	fclose(fw);
	
	return 0;
}
