#include<iostream>
using namespace std;

int main(){
	
	int *pointer=NULL;
	
	int *aptr;
	
	aptr = new int;
	
	*aptr=24;
	
	
	int *ptrdizi;
	ptrdizi = new int[3];
	
	ptrdizi[2]=13;
	cout<<ptrdizi[2]<<endl;
	
	*(ptrdizi+2)=7;
	cout<<ptrdizi[2]<<endl;
	
	ptrdizi++;
	
	delete aptr;
	delete []ptrdizi;
	
	return 0;
}
