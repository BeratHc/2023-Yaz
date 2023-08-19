/*#include <iostream>
using namespace std;

struct hayvan{
	int kilo;
	float boy;
	string isim;
}kopek;

int main() {
	
	struct hayvan kopek={7, 45, "Pamuk"};
	
	cout<<kopek.kilo<<endl;
	
	struct hayvan kedi;
	
	cout<<endl<<"Kedinin kilosunu, boyunu ve ismini giriniz: "<<endl;
	cin>>kedi.kilo>>kedi.boy>>kedi.isim;
	
	cout<<endl;
	
	cout<<"Kedinin bilgileri: "<<endl;
	cout<<"Kilosu: "<<kedi.kilo<<" Boyu: "<<kedi.boy<<" Ismi: "<<kedi.isim<<endl;
	
	return 0;
}*/


#include <iostream>
using namespace std;

struct hayvan{
	int kilo;
	float boy;
	char isim[10];
}kopek;

int main() {
	
	struct hayvan kopek={7, 45, "Pamuk"};
	
	printf("%d\n",kopek.kilo);
	
	struct hayvan kedi;
	
	printf("\nKedinin kilosunu, boyunu ve ismini giriniz: \n");
	scanf("%d%f%s",&kedi.kilo,&kedi.boy,kedi.isim);
	
	printf("\n");
	
	printf("Kedinin bilgileri: \n");
	printf("Kilosu: %d Boyu: %f Ismi: %s\n",kedi.kilo,kedi.boy,kedi.isim);
	
	return 0;
}
