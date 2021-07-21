/*#include <stdio.h>
#include <string.h>

int main(){
	
	char p[50];
	char* ptr = p;
	int i, j, m, n;
	
	printf("Input a word : ");
	scanf("%s", p);
	
	printf("Input a standard number : ");
	scanf("%d", &n);
	
	i = strlen(p);
	
	for(m = 0; m+n<=i; m++){
		for(j = m; j < m + n; j++){
			printf("%c", *(ptr + j));
		}
		printf("\n");
	}
	return 0;
}*/

#include <stdio.h>
#include <string.h>

int main(){
	
	char text[30];
	int length;
	int gram;
	int i, j;
	
	printf("input text : ");
	scanf("%s", &text);
	
	length = strlen(text);
	
	printf("extract N-gram : ");
	scanf("%d", &gram);
	
	for(i = 0; i <= length-gram; i++){
		for(j = 0; j < gram; j++){
			printf("%c", text[i - j]);
		}
		printf("\n");
	}
	
	return 0;
}
