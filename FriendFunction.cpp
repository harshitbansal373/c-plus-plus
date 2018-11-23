//friend function in single class

#include<iostream.h>
class complex{
	private:
		int a,b;
	public:
		void setdata(int x,int y){
			a=x; b=y;
		}
		void showdata(){
			cout<<"\na"<<a<<"b"<<b;
		}
		friend void fun(complex);
};

void fun(complex c){
	cout<<"sum is "<<c.a+c.b;
}

int main(){
	complex c1,c2,c3;
	c1.setdata(2,3);
	fun(c1);
	return 0;
}
