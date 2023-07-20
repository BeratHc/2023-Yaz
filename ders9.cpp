#include <iostream>
#include <cmath>

using namespace std;

void parametre(int x, int &y){//x parametresi değer, y parametresi referans parametresi

	x=3;
	y=4;
	cout<<"x: "<<x<<endl<<"y: "<<y<<endl;
	
}
int main() {
	int a=2, b=8;
	
	parametre(a,b);
	
	cout<<endl<<endl;
	
	cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
	
	return 0;
}
