#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ofstream dos("yaz.txt",ios::out);
	int sayi=3;
	for(int i=0; i<3; i++){
		cin>>sayi;
		if (sayi>0)
			dos<<sayi<<endl;
	}
	dos.close();
	
	return 0;
}
