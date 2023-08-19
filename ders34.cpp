/*#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	vector<int> ornek(6,4);
	
	ornek[0] += 5;
	ornek[1] -= 2;
	
	for(int i=0; i<6; i++){
		cout<<"ornek["<<i<<"]="<<ornek.at(i)<<endl;
	}
	return 0;
}*/


#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	vector<int> ornek(6,4);
	
	ornek[0] += 5;
	ornek[1] -= 2;
	
	for(int i=0; i<6; i++){
		printf("ornek[%d]=%d\n",i,ornek.at(i));
	}
	return 0;
}
