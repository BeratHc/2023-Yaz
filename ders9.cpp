/*#include <iostream>
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
}*/


	
	
#include <iostream>
#include <cmath>

using namespace std;

void parametre(int x, int &y){//x parametresi değer, y parametresi referans parametresi

	x=3;
	y=4;
	printf("x: %d\n",x);printf("y: %d\n",y);
	
}
int main() {
	int a=2, b=8;
	
	parametre(a,b);
	
	printf("\n\n");
	
	printf("a: %d\n",a);printf("b: %d\n",b);
	
	return 0;
}
