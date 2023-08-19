/*#include <iostream>
using namespace std;

void Eksili(int x[][3]){
	
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			x[i][j]*=(-1);
		}
	}
}

int main() {
	
	int multidizi[2][3]={{1,2,3},{4,5,6}};
	
	cout<<multidizi[1][2]<<endl<<endl;
	
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout<<multidizi[i][j]<<endl;
		}
	}
	
	cout<<endl<<endl;
	Eksili(multidizi);
	
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout<<multidizi[i][j]<<endl;
		}
	}
	
	return 0;
}*/



#include <iostream>
using namespace std;

void Eksili(int x[][3]){
	
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			x[i][j]*=(-1);
		}
	}
}

int main() {
	
	int multidizi[2][3]={{1,2,3},{4,5,6}};
	
	printf("%d\n\n",multidizi[1][2]);
	
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			printf("%d\n",multidizi[i][j]);
		}
	}
	
	printf("\n\n");
	Eksili(multidizi);
	
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			printf("%d\n",multidizi[i][j]);
		}
	}
	
	return 0;
}
