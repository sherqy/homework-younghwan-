#include <iostream>
#include <cstring>
using namespace std; 

int main(){
	
	string a = "programming";
	
	cout << "\nC++ style 문자열 다루기(길이구하기)\n" << endl;
	cout << "programming = " << sizeof("programming") << "byte" << endl;
	cout << "programming = " << a.length() << "byte" << endl;
	
	return 0; 
}
