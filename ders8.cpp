#include <iostream>
#include <cmath>

using namespace std;

void yazdir(){
	cout<<"yazdirdi"<<endl;
}

int Topla(int x, int y){
	
	int sonuc;
	sonuc = x+y;
	
	return sonuc;
}

int main(){
	
	cout << "4'un karekoku :" << sqrt(4.0) <<endl;
	
	cout << "-19'un mutlak degeri :" << abs(-19) <<endl;
	
	yazdir();
	
	cout << "2 + 5 ="<< Topla(2,5)<<endl;
	
	return 0;
}
