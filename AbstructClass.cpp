//abstract class and pure virtual function

#include<iostream>
using namespace std;

class balagurusamy{							//abstruct class
	public:
		virtual void example()=0;			//pure virtual function
};
class c:public balagurusamy{
	public:
		void exmaple(){
			cout<<"c text book written by balagurusamy";
		}
};
class oops:public balagurusmay{
	void example(){
		cout<<"c++ text book written by balagurusmay";
	}
};

int main(){
	balagurusamy *arr[2];
	c e1;
	oops e2;
	arr[0]=&e1;
	arr[1]=&e2;
	arr[0]->example();
	arr[1]->example();
	return 0;
}
