/*#include<iostream>
using namespace std;

class A{
	int x;
	public:
		int xAta(){
			return x=2;
		}
};

class B{
	int y;
	public:
		int yAta(){
			return y=5;
		}
};

class C : public A, public B{
	int z;
	public:
		int zAta(){
			return z=78;
		}
};

int main(){
	
	C c1;
	cout<<"A: "<<c1.xAta()<<endl;
	cout<<"B: "<<c1.yAta()<<endl;
	cout<<"C: "<<c1.zAta()<<endl;
	
	return 0;
}*/



#include<iostream>
using namespace std;

class A{
	int x;
	public:
		int xAta(){
			return x=2;
		}
};

class B{
	int y;
	public:
		int yAta(){
			return y=5;
		}
};

class C : public A, public B{
	int z;
	public:
		int zAta(){
			return z=78;
		}
};

int main(){
	
	C c1;
	printf("A: %d\n",c1.xAta());
	printf("B: %d\n",c1.yAta());
	printf("C: %d\n",c1.zAta());
	
	return 0;
}
