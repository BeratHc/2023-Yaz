#include<iostream>
using namespace std;

class Silgi{
	
	int sayi;
	public:
		Silgi();        //Default constructor
		Silgi( Silgi &s1);     //Copy constructor
};

Silgi::Silgi(){
	
	sayi=5;
	cout<<"Default constructor cagrildi. "<<endl;
}

Silgi::Silgi(Silgi &s1){
	
	sayi = s1.sayi;
	cout<<"Copy constructor cagrildi. "<<endl;
}

int main(){
	
	Silgi o1;
	Silgi o2(o1);
	Silgi o3=o2;
	
	return 0;
}
