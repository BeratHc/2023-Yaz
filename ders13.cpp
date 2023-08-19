/*#include<iostream>
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
}*/



#include<iostream>
using namespace std;

struct dogum{
	int yil;
	char cins[10];
};

struct hayvan{
	int kilo;
	float boy;
	char isim[10];
	struct dogum dogumYil;
}kopek;

int main(){
	
	struct hayvan kopek;
	
	printf("Kedinin kilosunu, boyunu, ismini, dogum yilini ve cinsini giriniz: \n");
	scanf("%d%f%s%d%s",&kopek.kilo,&kopek.boy,kopek.isim,&kopek.dogumYil.yil,kopek.dogumYil.cins);
	
	printf("\nKopek bilgileri: \n");
	
	printf("Kilosu: %d\nBoyu: %f\nIsmi: %s\nDogum yili: %d\nCinsi: %s\n",kopek.kilo,kopek.boy,kopek.isim,kopek.dogumYil.yil,kopek.dogumYil.cins);
	
	return 0;
}
