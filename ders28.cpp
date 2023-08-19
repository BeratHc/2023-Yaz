/*#include<iostream>
using namespace std;

class A{
	public:
		virtual void yaz(){
			cout<<"A"<<endl;
		}
};

class B:public A{
	public:
		void yaz(){
			cout<<"B"<<endl;
		}
};

class C:public A{
	public:
		void yaz(){
			cout<<"C"<<endl;
		}
};

int main(){
	
	A *ptr = new B;
	ptr->yaz();
	
	ptr=new C;
	ptr->yaz();
	
	delete ptr;
	
	return 0;
}*/



#include<iostream>
using namespace std;

class A{
	public:
		virtual void yaz(){
			printf("A\n");
		}
};

class B:public A{
	public:
		void yaz(){
			printf("B\n");
		}
};

class C:public A{
	public:
		void yaz(){
			printf("C\n");
		}
};

int main(){
	
	A *ptr = new B;
	ptr->yaz();
	
	ptr=new C;
	ptr->yaz();
	
	delete ptr;
	
	return 0;
}
