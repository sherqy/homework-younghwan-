#include <iostream>
#include <math.h>

int funA(int);
int funB(int);

int funA(int n) {
	if (n <= 1)
		return 1;
	else
		return 2 * funB(n - 1);
}

int funB(int n) {
	if (n <= 1)
		return 2;
	else
		return 3 * funA(n - 1);
}

/*int fac(int n)
{
	int f = 1; int i;
	for (i = 1; i <= n; i++)
		f = f * i;
	return f;
}

int facrec(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * facrec(n - 1);
}*/

int main() {
	std::cout << funA(10) << std::endl;
}
