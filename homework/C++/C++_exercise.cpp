/*#include <iostream>
#include <cstring>
using namespace std;

class Ramen
{
	private:
		char brand[20];
		int price;
		
	public:
		Ramen(char* _b, int _p);
		~Ramen();
	void Disp(void);
};

Ramen::Ramen(char* _b, int _p)
{
	strcpy(this->brand, _b);
	this->price = _p;
	cout << "Ramen 생성자 함수 " << endl;
}

Ramen::~Ramen()
{
	cout << "~~Ramen 소멸자 함수 " << endl;
}

void Ramen::Disp(void)
{
	cout << this->brand << " ==> " << this->price << "원 " << endl;
}

int main()
{
	Ramen r1 = {"신라면", 1100 };
	Ramen r2 = {"진짬뽕", 1500 };
	
	r1.Disp();
	r2.Disp(); 
	
	return 0;
}*/

#include <iostream>
class Circle {
	private:
		double radius;
	public:
		Circle( double radius ) {
			this -> radius = radius;
		}
		double area() {
			return radius * radius * 3.14
		}
		friend std::ostream& operator << ( std::ostream& out, Circle& c );
};
std::outstream & operator << (std::ostream& out, Circle& c) {
	out << c.radius;
	return out;
}
int main() {
	Circle c1( 4.0 );
	Circle c2( 5.0 );
	std::cout << (4.0 + c2) << std::endl;
}
