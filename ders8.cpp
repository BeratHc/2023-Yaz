/*#include <iostream>
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
}*/


#include <iostream>
#include <cmath>

using namespace std;

void yazdir(){
	printf("yazdirdi\n");
}

int Topla(int x, int y){
	
	int sonuc;
	sonuc = x+y;
	
	return sonuc;
}

int main(){
	
	printf("4'un karekoku :%f\n",sqrt(4.0));
	
	printf("-19'un mutlak degeri :%d\n",abs(-19));
	
	yazdir();
	
	printf("2 + 5 =%d\n",Topla(2,5));
	
	return 0;
}
