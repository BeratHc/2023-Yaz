/*#include<iostream>
using namespace std;

class Nesne{
	
	int sayi;
	public:
		Nesne(int sayi=0);
		~Nesne();
};

Nesne::~Nesne(){
	
	cout<<"Destructor cagrildi !"<<endl<<"sayi: "<<sayi<<endl;
}

Nesne::Nesne(int a){
	
	sayi = a;
	cout<<"constructor cagrildi !"<<endl;
}

int main(){
	
	Nesne n1(75), n2;
	Nesne n3(55);
	
	return 0;
}*/



#include<iostream>
using namespace std;

class Nesne{
	
	int sayi;
	public:
		Nesne(int sayi=0);
		~Nesne();
};

Nesne::~Nesne(){
	
	printf("Destructor cagrildi !\nsayi: %d\n",sayi);
}

Nesne::Nesne(int a){
	
	sayi = a;
	printf("constructor cagrildi !\n");
}

int main(){
	
	Nesne n1(75), n2;
	Nesne n3(55);
	
	return 0;
}
