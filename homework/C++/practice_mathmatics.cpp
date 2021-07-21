#include <iostream>

int bieff(int, int);
int fac(int);

int main(){
	
	int n, r, re;
	
	std::cout << "Input n, r.\n";
	std::cin >> n;
	std::cin >> r;
	
	re = bieff(n, r);
	
	std::cout << "The binomial coefficient of n, r is " << re << "." << std::endl;
	
	return 0;
}

int bieff(int n, int r){
	
	int a, b, c, re;
	
	a = fac(n);
	b = fac(n - r);	
	c = fac(r);
		
	re = a / ( b * c );
	
	return re;
}

int fac(int x){
	
	if(x <= 1)
		return(1);
	else
		return(x*fac(x - 1));
}

#include <iostream>

int list[9] = { 1,2,3,4,5,6,7,8,9 };

void swap(int, int);
void printArray(int);
void permutNumbers(int, int);

int main() 
{
   int n = 0;
   int sizeValue;

   std::cout << "Input the permutation value: ";
   std::cin >> n;

   sizeValue = n;

   permutNumbers(n, sizeValue);

   return 0;
}

void swap(int x, int y) {
   int temp = list[x];
   list[x] = list[y];
   list[y] = temp;
}

void printArray(int sizeValuePrint) {

   for (int i = 0; i < sizeValuePrint; i++)
   {
      std::cout << list[i];
   }
   std::cout << "" << std::endl;
}

void permutNumbers(int i, int size)
{
   int sizeOne, sizeTwo;
   sizeOne = i;
   sizeTwo = i;
   if (i != 0)
   {
      for (int j = i - 1; j >= 0; j--)
      {
         swap(j, i - 1);
         permutNumbers(i - 1, size);
         swap(j, i - 1);
      }
   }
   else   
      printArray(size);
}

#include <iostream>

int sum_down(int);

int main(){
	
	int a = 0, b = 0;
	
	std::cin >> a;
	b = sum_down(a);
	
	std::cout << b;
}

int sum_down(int x)
{
	if (x >= 0)
	{
		x = x - 1;
		int y = x + sum_down(x);
		return y + sum_down(x);
	}
	else
	{
		return 1;
	}
}
#include <iostream>

int involve(int, int);

int main(){
	
	int a = 0, b = 0 , subtotal = 0;
	
	std::cin >> a;
	
	while(b != a - 1)
	{
		subtotal += involve(b, 1) - 1;
		b += 1;
	}
	subtotal += 1;
	std::cout << subtotal;
	
	return 0;
}

int involve(int x, int y){
	
	if(x >= 0){
		y *= 2;
		y = involve(x - 1, y);
	}
	else
		return y;
}
