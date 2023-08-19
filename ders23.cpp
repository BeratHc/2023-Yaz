/*#include<iostream>
using namespace std;

class Ornek {
	
	int sayi;
	
	public:
		Ornek() : sayi(10){}
		
		void operator *() {
			
			sayi = sayi * 4;
		}
		void yaz(){
			
			cout<< "Sayi: "<< sayi<< endl;
		}
};

int main(){
	
	Ornek o1;
	*o1;
	o1.yaz();
	return 0;
}*/


#include<iostream>
using namespace std;

class Ornek {
	
	int sayi;
	
	public:
		Ornek() : sayi(10){}
		
		void operator *() {
			
			sayi = sayi * 4;
		}
		void yaz(){
			
			printf("Sayi: %d\n",sayi);
		}
};

int main(){
	
	Ornek o1;
	*o1;
	o1.yaz();
	return 0;
}
