#include <iostream>
using namespace std;

int main() {
	
	int temp = 24;
	int sayi;
	
	cout << "Bir tam sayi giriniz.";
	cin >> sayi;
	
	if(sayi > temp) {
		cout << "Daha kucuk bir sayi giriniz!\n";
		main();
	}
	else if(sayi < temp) {
		cout << "Daha buyuk bir sayi giriniz!\n";
		main();
	}
	else {
		cout << "Tebrikler sayiyi buldunuz!";
	}
	return 0;
	
	
}
