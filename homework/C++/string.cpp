#include <iostream>
#include <cstring>
using namespace std; 

int main(){
	
	string a = "programming";
	
	cout << "\nC++ style ���ڿ� �ٷ��(���̱��ϱ�)\n" << endl;
	cout << "programming = " << sizeof("programming") << "byte" << endl;
	cout << "programming = " << a.length() << "byte" << endl;
	
	return 0; 
}
