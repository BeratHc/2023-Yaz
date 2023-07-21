#include<iostream>
using namespace std;

int main(){
	
	int a=5;
	int *aptr;
	
	aptr = &a;
	
	*aptr=4;
	
	cout<<a;
	
	return 0;
}
