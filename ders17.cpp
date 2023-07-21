#include<iostream>
using namespace std;

class Topla{
	
	public:
		Topla(int d1, int d2){
			degisken1=d1;
			degisken2=d2;
		}
		int sonuc(){
			return degisken1+degisken2;
		}
	
	private:
		int degisken1, degisken2;
};

int main(){
	
	Topla ornek(2,4);
	cout<<"Toplam sonucu: "<<ornek.sonuc()<<endl;
	return 0;
}
