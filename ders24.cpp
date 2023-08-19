/*#include<iostream>
using namespace std;

class A{
	
	int sayi;
	
	public:
		void setA(int s1){
			sayi=s1;
		}
		int getA(){
			return sayi;
		}
};

class B:public A{
	
	int sayi2;
	public:
		void setB(int s1){
			sayi2=s1;
		}
		int getB(){
			return sayi2;
		}
};

int main(){
	
	B b1;
	b1.setA(9);
	b1.setB(12);
	
	cout<<"sayi: "<<b1.getA()<<endl;
	cout<<"sayi2: "<<b1.getB()<<endl;
	
	return 0;
}*/



#include<iostream>
using namespace std;

class A{
	
	int sayi;
	
	public:
		void setA(int s1){
			sayi=s1;
		}
		int getA(){
			return sayi;
		}
};

class B:public A{
	
	int sayi2;
	public:
		void setB(int s1){
			sayi2=s1;
		}
		int getB(){
			return sayi2;
		}
};

int main(){
	
	B b1;
	b1.setA(9);
	b1.setB(12);
	
	printf("sayi: %d\n",b1.getA());
	printf("sayi2: %d\n",b1.getB());
	
	return 0;
}
