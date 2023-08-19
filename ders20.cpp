/*#include<iostream>
using namespace std;

class Yazdir{
	
	int sayi;
	public:
		Yazdir(int x=0):sayi(x){}
		friend void yaz(Yazdir&);
};

void yaz(Yazdir &y1){
	
	cout<<"Sayi: "<<y1.sayi<<endl;
}

int main(){
	
	Yazdir ornek1(45), ornek2(78);
	yaz(ornek1);
	yaz(ornek2);
	
	return 0;
}*/



#include<iostream>
using namespace std;

class Yazdir{
	
	int sayi;
	public:
		Yazdir(int x=0):sayi(x){}
		friend void yaz(Yazdir&);
};

void yaz(Yazdir &y1){
	
	printf("Sayi: %d\n",y1.sayi);
}

int main(){
	
	Yazdir ornek1(45), ornek2(78);
	yaz(ornek1);
	yaz(ornek2);
	
	return 0;
}
