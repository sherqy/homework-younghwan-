/*#include <stdio.h>							//1번 코드

int main() {

	int num, factorial;

	printf("Enter a number. : ");				//숫자입력
	scanf_s("%d", &num);

	factorial = 1;								//1부터 계산시작

	while (num > 0) {							//팩토리얼 계산 방법
		factorial *= factorial * num;
		--num;
	}
	printf("Factorial = %d", factorial);		//팩토리얼 출력

	return 0;
}*/
/*#include <stdio.h>					//2번 코드

int main() {
	int sum = 0, num;

	do {
		printf("Put a number. : ");		//숫자 일벽
		scanf_s("%d", &num);
		sum = sum + num;				//합 계산
	} while (num != 0);					//조건은 0이 아닐때

	printf("The sum is %d.", sum);		//합 출력

	return 0;
}*/
/*#include <stdio.h>					//3번 코드

int main() {
	int n, sum=0, num;

	printf("Put a number. : ");			//숫자 입력
	scanf_s("%d", &num);

	for (n = 1; n <= num; n++) {		//합 계산
		sum = sum + n;
	}

	printf("The sum is %d.", sum);		//합 출력

	return 0;
}*/
/*#include <stdio.h>					//4번 코드

int main() {
	
	int i, n;
	printf("Enter an integer to find multiplication table. : ");
	scanf_s("%d", &n);					//숫자 입력
	
	for (i = 1; i <= 10; i++)			//구구단 틀 만들기
	{
		printf("%d * %d = %d \n", n, i, n * i);
	}
	
	return 0;
}*/
/*#include <stdio.h>						//5번 코드

int main() {

	int i, n;
	float sum=0;
	float m;

	printf("Maximum no. of inputs : ");		//숫자 입력
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++ ) {				
		
		printf("Enter n%d : ", i);			//숫자 입력
		scanf_s("%f", &m);

		if (m < 0)							//조건 부여
			break;

		sum += m;

	}

	printf("Average = %.2f \n", sum / (i - 1));	//평균 구하기

	return 0;
}*/
/*#include <stdio.h>						//6번 코드

int main() {
	int i, product, num;

	for (i = 1, product = 1; i <= 4; i++)
	{
		printf("Enter num%d : ", i);
		scanf_s("%d", &num);				//숫자 입력

		if (num == 0)						//조건 부여
			continue;

		printf("(current i is %d) \n", i);	//문자열 출력

		product *= num;						//숫자 곱하기
	}

	printf("product=%d", product);			//곱한거 출력

	return 0;
}*/
/*#include <stdio.h>							//7번 코드

int main() {
	int i, n, sum = 0;

	printf("Input the Maximum number : ");		//숫자 입력
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		
		sum += i;								//숫자 더하기
	}

	printf("The sum of sequence is %d. \n", sum);

	return 0;
}*/
/*#include <stdio.h>							//8번 코드

int main() {
	int num1, num2, i, hcf;

	printf("Enter two different numbers. : ");	//숫자 입력
	scanf_s("%d%d", &num1, &num2);

	for (i = 1; i <= num1 || i <= num2; i++) {	//공약수 조건
		if (num1%i == 0 && num2%i == 0)
			hcf = i;
	}

	printf("h.c.f of %d and %d is %d", num1, num2, hcf);	//출력

	return 0;
}*/
/*#include <stdio.h>						//9번 코드

int main() {

	int n, reverse = 0, rem, temp;
	printf("Enter an integer. : ");			//숫자 입력
	scanf_s("%d", &n);
	temp = n;
	while (temp != 0) {						//while문 조건 부여	
		rem = temp % 10;					
		reverse = reverse * 10 + rem;
		temp /= 10;
	}

	if (reverse == n)						//조건 참 -> 숫자 맞음
		printf("%d is a palindrome.", n);
	else									//조건 거짓 -> 숫자 틀림
		printf("%d is not a palindrome.", n);

	return 0;
}*/
/*#include <stdio.h>					//10번 코드

int main() {

	double total = 0.0, input = 0.0;
	int num = 0;

	for (; input >= 0.0;) {

		total += input;									//숫자 더하기
		printf("input real number (minus to quit) : ");	//숫자 입력
		scanf_s("%lf", &input);
		num++;
	}

	printf("average : %f \n", total / (num - 1));		//입력한 숫자 평균내기
	return 0;
}*/
/*#include <stdio.h>					//11번 코드

int main() {

	int cur = 2;
	int is = 0;

	while (cur < 10) {

		is = 1;

		while (is < 10) {				//곱하는 수 올리기
			printf("%d x %d = %d \n", cur, is, cur*is);
			is++;						//곱해지는 수 올리기
		}
		cur++;
	}
	return 0;
}*/
/*#include <stdio.h>				//12번 코드

int main() {
	int total = 0, num = 0;

	do {
		printf("input integer number (0 to quit) : ");	//숫자 입력
		scanf_s("%d", &num);
		total += num;				//숫자 더하기
	} while (num != 0);

	printf("sum : %d \n", total);	//숫자 출력
	return 0;
}*/