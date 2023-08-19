/*#include<iostream>
using namespace std;

class Alfabe{
	
	public:
		int x;
		void sesli();
		
		void yazdir(){
			cout<<"x: "<<x<<endl;
		}
		
		void eris(){
			a=5.4;
			cout<<"a: "<<a<<endl;
		}
	
	private:
		float a;
};

void Alfabe::sesli(){
	
	cout<<"Sesli harfler a e i i o o u u"<<endl;
	
	cout<<"x in degeri: "<<x<<endl;
}

int main(){
	
	Alfabe alf;
	alf.x=23;
	alf.yazdir();
	alf.eris();
	alf.sesli();
	
	return 0;
}*/



#include<iostream>
using namespace std;

class Alfabe{
	
	public:
		int x;
		void sesli();
		
		void yazdir(){
			printf("x:%d\n",x);
		}
		
		void eris(){
			a=5.4;
			printf("a:%f\n",a);
		}
	
	private:
		float a;
};

void Alfabe::sesli(){
	
	printf("Sesli harfler a e i i o o u u\n");
	
	printf("x in degeri:%d\n",x);
}

int main(){
	
	Alfabe alf;
	alf.x=23;
	alf.yazdir();
	alf.eris();
	alf.sesli();
	
	return 0;
}
