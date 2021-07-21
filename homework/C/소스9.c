#include <stdio.h>
#include <string.h>

void SetPass(char *);
void Encrypt(char *, char *);
void EnterPass(char *);

int main() {

	char password[256] = { 0, };
	char Epassword[256] = { 0, };
	SetPass(password);
	Encrypt(password, Epassword);
	EnterPass(Epassword);

	return 0;
}
void SetPass(char *p) {

	printf("Set your password : ");
	scanf_s("%s", p);
	printf("your password is set : '%s'\n", p);
}
void encrypt(char *p, char *pp) {

	char Enpassword[256];
	int i, j;
	int TF;

	while (1) {
		
		TF = 0;
		
		printf("Enter your password : ");
		scanf_s("%s", Enpassword);
		i = strlen(Enpassword);
		
		for (j = 0; j < i; j++)
			Enpassword[j] = (((Enpassword[j] - 'A') + 23) % 26) + 'A';

		printf("Comparing encrypted strings : ");

		for (j = 0; j < i; j++)
			printf("%c", Enpassword[j]);

		printf(" and %s \n", p);

		i = strlen(p);
		for (j = 0; j < i; j++)
		{
			if (Enpassword[j] == p[j])
				TF++;
		}
		if (i == TF)
			break;
	}
	printf("Welcome user!!\n\n");
	printf("Your password is ");
	i = strlen(p);
	for (j = 0; j < i; j++)
		printf("%c", (((p[j] - 'A') - 23 + 26) % 26) + 'A');
	printf("\n");

}