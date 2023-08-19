/*#include <iostream>
using namespace std;

class A{
	int a;
	public:
		A(int a1):a(a1){}
		void yaz();
};

void A::yaz() {
	
	cout<<"a: "<<this->a<<endl;
	
}

int main(){
	
	A a1(45), a2(95);
	
	a1.yaz();
	a2.yaz();
	return 0;
}*/



#include <iostream>
using namespace std;

class A{
	int a;
	public:
		A(int a1):a(a1){}
		void yaz();
};

void A::yaz() {
	
	printf("a: %d\n",this->a);
	
}

int main(){
	
	A a1(45), a2(95);
	
	a1.yaz();
	a2.yaz();
	return 0;
}
