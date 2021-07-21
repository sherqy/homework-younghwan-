#include <stdio.h>

void Fig_1();										//�Լ� ȣ��
void Fig_2();
void Fig_3();
int escape();

int main() {

	int n, m;

	jump:

	printf("****************** \n");				//�޴� ���
	printf("1. Armstrong number identification\n");
	printf("2. Sorting(Ascending)\n");
	printf("3. Decimal to Binary\n");
	printf("4. Exit\n");
	printf("****************** \n");
	printf("\n\nSelect Menu : ");
	scanf_s("%d", &n);
	

	switch (n) {									//�޴� ����� ��
	case 1:
		Fig_1();
		while (getchar() != '\n');
		escape();
		break;
		
	case 2:
		Fig_2();
		while (getchar() != '\n');
		escape();
		break;
		
	case 3:
		Fig_3();
		while (getchar() != '\n');
		escape();
		break;

	case 4:
		printf("Bye!\n");
		return 0;

	default:
		printf("You entered wrong number!\n\n\n\n");
		goto jump;
	}
}

void Fig_1() {
	
	int a, sum=0, i, temp;

	printf("Enter a positive number : ");
	scanf_s("%d", &i);

	temp = i;

	while (temp > 0) {				//�Ͻ�Ʈ�� �ѹ����� Ȯ��

		a = temp % 10;
		temp = temp / 10;
		sum += a * a*a;		
	}

	if (sum == i)
		printf("%d is an Armstrong number.\n", i);
	else
		printf("%d is not an Armstrong number.\n", i);	
}				//�Լ� 1��		

void Fig_2() {
	int max, mid, min, temp;

	printf("Input three number from 0 to 99\n");
	printf("Input 1st number : ");
	
	scanf_s("%d", &max);				//���� �Է� 1��

	if (max >= 0 && max <= 99)
		printf("Input 2nd number : ");
	else {
		printf("%d is out of range!\n", max);
	}

	scanf_s("%d", &mid);				//���� �Է� 2��

	if (mid >= 0 && mid <= 99)
		printf("Input 3rd number : ");
	else {
		printf("%d is out of range!\n", mid);
	}
	scanf_s("%d", &min);				//���� �Է� 3��

	if (min >= 0 && min <= 99) {				//���� ���

		temp = max;
		if (temp < mid)
		{
			temp = mid;
			mid = max;
			max = temp;
		}
		else if (temp < min)
		{
			temp = min;
			min = max;
			max = temp;
		}
		else if (mid < min)
		{
			temp = mid;
			mid = min;
			min = temp;
		}
		printf("The sorted result is %d, %d, %d. \n", min, mid, max);
	}
	else {
		printf("%d is out of range!\n", min);
	}
}				//�Լ� 2��

void Fig_3() {

	int i, j, temp;
	int result[20];
	int num;

	printf("Input one integer number from 0 to 99 : ");
	scanf_s("%d", &num);

	temp = num;

	for (i = 0; num > 0; i++)			//2�� ������, ������ ����
	{
		result[i] = num % 2;
		num = num / 2;
	}
	
	printf("Decimal number %d is ", temp);

	for (j = i - 1; j >= 0; j--)		//������ ����� �� �Ųٷ� ���
	{
		printf("%d", result[j]);
	}

	printf(" in binary number. \n");
}				//�Լ� 3��

int escape() {

	char m;

	printf("Do you want to return to main menu? (y/n)\n");
	scanf_s("%c", &m);

	if(m=='y'){				//y���� n���� �Ǻ�
		main();
	}
	
	else if (m == 'n') {
		printf("Bye!\n");
		return 0;
	}
}				//Ż�� �Լ�