#include <iostream>
void fun( void ) {
	int* p;
	std::cout << "Before throw in fun..." << std::endl;
	p = new int;
	throw 3;
	delete p;
	std::cout << "After throw in fun..." << std::endl;
}

int main() {
	
		try {
			std::cout << "Before throw..." << std::endl;
			fun();
			std::cout << "After throw..." << std::endl;
			break;
		}
		catch( int e ) {	//catch block
			std::cout << "In catch " << e << std::endl;
		}
	std::cout << "After catch..." << std::endl;
}
