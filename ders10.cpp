/*#include <iostream>
using namespace std;

void Topla(int &x){
	x=x+3;
}

int main() {
	
	int yaslar[4];
	cout<<"Yaslarinizi giriniz: "<<endl;
	
	for(int i=0; i<4; i++){
		cin>> yaslar[i];
	}
	
	cout<<"Kisilerin Yaslari: "<<endl;
	
	for(int j=0; j<4; j++){
		cout<<yaslar[j]<<endl;
	}
	cout<<endl<<endl;
	
	//----------------------------------
	
	float oranlars[3]={1.2,3.4,5.6};
	
	double dizi[5]={0};
	
	int diziler[]={1,2,3,4};
	
	Topla(diziler[3]);
	
	for(int i=0; i<4; i++)
		cout<<diziler[i]<<endl;
	
	return 0;
}*/


#include <iostream>
using namespace std;

void Topla(int &x){
	x=x+3;
}

int main() {
	
	int yaslar[4];
	printf("Yaslarinizi giriniz: \n");
	
	for(int i=0; i<4; i++){
		scanf("%d",&yaslar[i]);
	}
	
	printf("Kisilerin Yaslari: \n");
	
	for(int j=0; j<4; j++){
		printf("%d\n",yaslar[j]);
	}
	printf("\n\n");
	
	//----------------------------------
	
	float oranlars[3]={1.2,3.4,5.6};
	
	double dizi[5]={0};
	
	int diziler[]={1,2,3,4};
	
	Topla(diziler[3]);
	
	for(int i=0; i<4; i++)
		printf("%d\n",diziler[i]);
	
	return 0;
}
