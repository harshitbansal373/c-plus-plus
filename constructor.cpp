//constructor

#include<iostrem>
using namespace std;

class complex{
	private:
		int a,b;
	public:
		complex(int x,int y){
			a=x; b=y;
		}
		complex(int k){
			a=k;
		}
		complex()
		{  }
		complex(complex c){
			a=c.a;
			b=c.b;
		}
};

int main(){
	clrscr();
	complex c1(3,4),c2,c3(5);
	complex c4(c1);
	return 0;
}
