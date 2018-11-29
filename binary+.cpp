//binary + using operator overloading 

#include<iostrem.h>
using namespace std;

class complex{
	private:
		int a,b;
	public:
		void set_data(int x,int y){
			a=x; b=y;
		}
		void show_data(){
			cout<<"\n a"<<a<<"b"<b;
		}
		complex operator+(complex c){
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return(temp);
		}
};

int main(){
	clrscr();
	complex c1,c2,c3;
	c1.set_data(3,4);
	c2.set_data(5,6);
	c3=c1+c2;
	c3.show_data();
	return 0;
}
