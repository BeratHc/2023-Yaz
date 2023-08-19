/*#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	vector<int> x,y;
	
	x.push_back(1);
	x.push_back(2);
	y.push_back(3);
	
	cout<<x.front()<<endl;
	cout<<x.back()<<endl;
	cout<<y[0]<<endl;
	
	x.pop_back();
	cout<<x.back()<<endl;
	
	cout<<"x size: "<<x.size()<<endl;
	cout<<"bos mu: "<<x.empty()<<endl;
	
	x.swap(y);
	cout<<x[0]<<endl;
	
	y.clear();
	cout<<"bos mu: "<<y.empty()<<endl;
	
	return 0;
}*/



#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	vector<int> x,y;
	
	x.push_back(1);
	x.push_back(2);
	y.push_back(3);
	
	printf("%d\n",x.front());
	printf("%d\n",x.back());
	printf("%d\n",y[0]);
	
	x.pop_back();
	printf("%d\n",x.back());
	
	printf("x size: %d\n",x.size());
	printf("bos mu: %d\n",x.empty());
	
	x.swap(y);
	printf("%d\n",x[0]);
	
	y.clear();
	printf("bos mu: %d\n",y.empty());
	
	return 0;
}
