#include<iostream>
using namespace std;

struct dogum{
	int yil;
	string cins;
};

struct hayvan{
	int kilo;
	float boy;
	string isim;
	struct dogum dogumYil;
}kopek;

int main(){
	
	struct hayvan kopek;
	
	cout<<endl<<"Kedinin kilosunu, boyunu, ismini, dogum yilini ve cinsini giriniz: "<<endl;
	cin>>kopek.kilo>>kopek.boy>>kopek.isim>>kopek.dogumYil.yil>>kopek.dogumYil.cins;
	
	cout<<endl<<"Kopek bilgileri: "<<endl;
	
	cout<<"Kilosu: "<<kopek.kilo<<endl<<"Boyu: "<<kopek.boy<<endl<<"Ismi: "<<kopek.isim<<endl<<"Dogum yili: "<<kopek.dogumYil.yil<<endl<<"Cinsi: "<<kopek.dogumYil.cins;
	
	return 0;
}
