/*#include<iostream>
using namespace std;

class A{
	
	int a;
	public:
		int b;
	protected:
		int c;
	public:
		void setA(int s1){a=s1;}
		int getA(){return a;}
		void setB(int s1){b=s1;}
		int getB(){return b;}
		void setC(int s1){c=s1;}
		int getC(){return c;}
};

class B:public A{
	
	public:
		void yaz(){
			cout<<"a: "<<getA()<<endl;
			cout<<"b: "<<getB()<<endl;
			cout<<"c: "<<getC()<<endl;
		}
};

int main(){
	
	B b1;
	b1.setA(9);
	b1.b=23;
	b1.setC(45);
	b1.yaz();
	
	return 0;
}*/


#include<iostream>
using namespace std;

class A{
	
	int a;
	public:
		int b;
	protected:
		int c;
	public:
		void setA(int s1){a=s1;}
		int getA(){return a;}
		void setB(int s1){b=s1;}
		int getB(){return b;}
		void setC(int s1){c=s1;}
		int getC(){return c;}
};

class B:public A{
	
	public:
		void yaz(){
			printf("a: %d\n",getA());
			printf("b: %d\n",getB());
			printf("c: %d\n",getC());
		}
};

int main(){
	
	B b1;
	b1.setA(9);
	b1.b=23;
	b1.setC(45);
	b1.yaz();
	
	return 0;
}
