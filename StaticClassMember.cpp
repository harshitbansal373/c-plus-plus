//static class member 

#include<iostream>
using namespace std;

class item{
	static int count;
	int number;
	public:
		void getdata(int a){
			number = a;
			cout++;
		}
		void getcount(void){
			cout<<"count:";
			cout<<count<<"\n";
		}
};

int item::count;

int mian(){
	item a,b,c;
	a.getcount();
	b.getcount();
	c.getcount();
	
	a.getdata(100);
	b.getdata(200);
	c.getdata(300);
	
	cout<<"after reading data"<<"\n";
	a.getcount();
	b.getcount();
	c.getcount();
	return 0;
}


output
------
count:0
count:0
count:0
after reading data
count:3
count:3
count:3
