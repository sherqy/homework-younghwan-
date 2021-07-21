#include <iostream>

class Exception {
	public:
		int code;
		void printError_integer() {
			std::cout << "by using an integer." << std::endl;
		}
		void printError_double() {
			std::cout << "by using a double." << std::endl;
		}
		void printError_char() {
			std::cout << "by using a character." << std::endl;
		}
		Exception(int i) {
			code = i;
		}
};

void fun() {
	
	try {
		std::cout << "FA\n";
		throw new Exception(3); // line 5
		std::cout << "BA\n";
	}
	
	catch (Exception* e) {
		std::cout << "FCA " << e -> code << "\n";
		e -> printError_integer();
		delete e;
	}
	
	catch (char c) {
		std::cout << "FCB " << c << "\n";
		throw;
	}
	
	std::cout << "BC\n";
}

int main() {
	
	try {
		std::cout << "A\n"; 
		fun();
		std::cout << "B\n"; 
	}
	
	catch (int i) { 
		std::cout << "C " << i << "\n"; 
	}
	
	catch (double d) { 
		std::cout << "D " << d << "\n"; 
	}
	
	catch (Exception e) {
		e.printError_char();
	}
	
	catch (...) { 
		std::cout << "E\n";
	}
	
	std::cout << "F\n";
	
	return 0;
}

