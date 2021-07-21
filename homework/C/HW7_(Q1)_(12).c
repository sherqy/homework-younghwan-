/*#include <stdio.h>

int main(){
	
	int i = 0, j = 0;;
	char buffer[500];
	
	FILE *fp = fopen("assignment_text.txt", "r");
	
	fgets(buffer, sizeof(buffer), fp);
	
	while(buffer[i] != '\0'){
		printf("%c", buffer[i]);
		
		if(buffer[i] == '.'){
			printf("\n");
			j = j + 1;
			if( j == 3 )
			{
				printf("\n\n\n");
				j = 0;
			}
		}
		i++;	
	}
	fclose(fp);
	
	return 0;
}*/

#include <stdio.h>

int main(){
	
	int in, num = 0;
	char str;
	FILE *ifp;
	
	ifp = fopen("assignment_text.txt", "r");
	if(ifp == 0){
		printf("No file : assignment_text \n");
		return 1;
	}
	
	while(1){
		str = fgetc(ifp);
		if(str == EOF){
			break;
		}
		printf("%c", str);
		
		if(str == '.'){
			printf("\n");
			num++;
			if(num == 3){
				printf("\n\n");
				num = 0;
			}
		}
	}
	in = fclose(ifp);
	if( in != 0 ){
		printf("assignment_text.txt ");
	}
}
