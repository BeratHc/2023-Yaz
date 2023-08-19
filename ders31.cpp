#include<iostream>
using namespace std;

int main(){
	
	cout.put('A');
	cout.put('B').put('C');
	cout<<endl;
	
	char c;
	c=cin.get();
	cout<<c<<endl;
	cout<<cin.gcount()<<endl;
	
	return 0;
}
