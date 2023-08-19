/*
#include <iostream>

using namespace std;

int main() {
	
	cout << "Hello World";
	cout <<endl<<endl;
	
	// "<<" operator : stream insertion
	
	// ">>" operator : stream extraction
	
	int yil;
	cout << "Hangi yildayiz?";
	cin >> yil;
	cout << "Suan" << yil << "yilindayiz.";
	
	return 0;
}
*/

#include<iostream>

using namespace std;

int main() {
	
	printf("Hello World\n");
	
	
	// "<<" operator : stream insertion
	
	// ">>" operator : stream extraction
	
	int yil;
	printf("Hangi yildayiz?\n");
	scanf("%d",&yil);
	printf("Suan %d yilindayiz.",yil);
	
	return 0;
}
