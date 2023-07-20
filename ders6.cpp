#include <iostream>
using namespace std;

int main() {

	int a;
	
	cout << "Bir sayi giriniz:";
	cin >> a;
	
	while(a >= 0 && a <= 10){
		cout << "Evet sayi bu araliktadir. Tekrar  bir sayi giriniz:" << endl;
		cin >> a;
	}	
	cout << "Girdiginiz sayi 0'dan kucuk veya 10'dan buyuktur!!" << endl;
	
	//---------------------------------
	
	int x = 6;
	do{
		cout << "x:" << x << endl;
		
		x++;
	}
	while(x <=5);
	
	return 0;
}
