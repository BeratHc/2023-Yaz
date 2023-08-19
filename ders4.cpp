/*#include <iostream>
using namespace std;

int main() {
	
int number=0;
		int puan;
		cout << "1-5 arasinda puan veriniz.\n";
		cin >> puan;
		
		
		switch(puan){
			case 1:
				cout << "Cok kotu" << endl;
				break;
			case 2:
				cout << "Kotu" << endl;
				break;
			case 3:
				cout << "Orta" << endl;	
				break;
			case 4:
				cout << "Iyi" << endl;
				break;
			case 5:
				cout << "Cok iyi" << endl;
				break;
			default:
				cout << "Yorumsuz" << endl;
		}
		
	return 0;
}*/


#include <iostream>
using namespace std;

int main() {
	
int number=0;
		int puan;
		printf("1-5 arasinda puan veriniz.\n");
		scanf("%d",&puan);
		
		
		switch(puan){
			case 1:
				printf("Cok kotu\n");
				break;
			case 2:
				printf("Kotu\n");
				break;
			case 3:
				printf("Orta");	
				break;
			case 4:
				printf("Iyi\n");
				break;
			case 5:
				printf("Cok iyi\n");
				break;
			default:
				printf("Yorumsuz\n");
		}
		
	return 0;
}
