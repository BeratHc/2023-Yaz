#include <iostream>
using namespace std;

int main() {
	
	int a;
	
	for(a=3 ; a <= 8 ; a++)
		cout << a <<endl;
		
	cout << endl;
	
	//---------------------------
	
	for(int x=0; x<=5; x++){
		if(x==3)
		break;
		cout<< x <<endl;
	}
	cout << endl;
	
	for(int x=0; x<=5; x++){
		if(x==3)
		continue;
		cout<< x <<endl;
	}
	
	return 0;
}
