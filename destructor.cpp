//constructor

#include<iostream>
using namespace std;

int count=0;

class complex{
	private:
		int a,b;
	public:
		complex(){
			count++;
			cout<<"\n constructor msg: object number "<<count<<"created";
		}
		~complex(){
			cout<<"\ndestructor msg: object number "<<count<<"destroyed";
			count--;
		}
};

void fun(){
	complex obj;
}

int main(){
	cout<<"\nInside the main block..";
	complex c1;
	{
		cout<<"\ninside in block 1..";
		complex c2,c3;
		cout<<"\nleaving block";
	}
	cout<<"\n back inside the main block";
	return 0;
}


output
------

Inside the main block..
 constructor msg: object number 1created
inside in block 1..
 constructor msg: object number 2created
 constructor msg: object number 3created
leaving block
destructor msg: object number 3destroyed
destructor msg: object number 2destroyed
 back inside the main block
destructor msg: object number 1destroyed
--------------------------------
