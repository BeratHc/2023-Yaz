/*#include <iostream>
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
	
	cout << "yeni b:" << b-- * 4 << endl;
	
	cout << b;
	
	return 0;
}*/


#include <iostream>
using namespace std;

int main() {
	
	int a=3 , b=7;
	
	a += 5;
	printf("%d\n",a);
	
	b %= 3;
	printf("%d\n\n",b);
	
	
	++a;
	b++;
	
	
	printf("a =%d\n",a); printf("b =%d\n",b);
	
	printf("yeni a:%d\n",--a * 4);
	
	printf("yeni b:%d\n",b-- * 4);
	
	printf("%d",b);
	
	return 0;
}
