#include <iostream>
using namespace std;

int main() {
	
	int a=3 , b=7;
	
	a += 5;
	cout << a << endl;
	
	b %= 3;
	cout << b << endl;
	cout << endl;
	
	++a;
	b++;
	
	
	cout << "a =" << a << endl << "b =" << b << endl;
	
	cout << "yeni a:" << --a * 4 << endl;
	
	cout << "yeni b:" << a-- * 4 << endl;
	
	cout << b;
	
	return 0;
}
