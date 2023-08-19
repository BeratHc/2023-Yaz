#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ifstream dos("yaz.txt");
	
	string no1,no2;
	
	while(!dos.eof()){
		dos>>no1>>no2;
	}
	cout<<"okunanlar: "<<endl<<no1<<endl<<no2<<endl;
	return 0;
}
