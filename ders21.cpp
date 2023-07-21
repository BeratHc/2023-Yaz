#include<iostream>
using namespace std;

class B;
class A{
	int a;
	public:
		A(int a1):a(a1){}
		friend class B;
};

class B{
	int b;
	public:
		void yaz(A &ornek);
};

void B::yaz(A &ornek){
	
	b=ornek.a;
	cout<<"b: "<<b<<endl;
}

int main(){
	
	A a1(45);
	
	B b1;
	
	b1.yaz(a1);
	
	return 0;
}
