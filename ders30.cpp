#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string s1,s2,s3;
	s1="Hello";
	s2="World";
	s3=s1+s2;
	cout<<s3<<endl;
	
	string dizi;
	dizi="dizi";
	cout<<dizi[0]<<endl<<dizi[1]<<endl;
	cout<<dizi.length()<<endl;
	
	cout<<s1.compare(s2)<<endl;
	
	s1.swap(s2);
	cout<<s2<<endl;
	
	dizi.clear();
	cout<<"dizi: "<<dizi<<endl;
	cout<<"bos mu: "<<dizi.empty()<<endl;
	
	return 0;
}
