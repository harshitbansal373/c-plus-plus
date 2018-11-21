#include<conio.h>
#include<iostream>
using namespace std;

template<class T>
class calculator{
	private:
		T num1,num2;
	public:
		calculator(T n1,T n2){
			num=n1;
			num=n2;
		}
	void displayResult(){
		cout<<"numbers are:"<<num1<<"and"<<num2<<"."<<endl;
		cout<<"addition is:"<<add()<<endl;
		cout<<"subtraction is:"<<subtract()<<endl;
		cout<<"multiply is:"<<multiply()<<endl;
		cout<<"division is:"<<divide()<<endl;
	}
		T add()
		{return num1+num2;
		}
		
		T subtract()
		{return num1-num2;
		}
		
		T multiply()
		{return num1*num2;
		}
		
		T divide()
		{return num1/num2;
		}
};

int main(){
	calculator <int> calcInt(10,5);
	cout<<"Int results:"<<endl;
	calcInt.displayResult();
	
	calculator <float> calcFloat(8.8,2.2);
	cout<<endl<<"float results:"<<endl;
	calcFloat.displayResult();
	
	return0;
}

output
------
int result:
numbers are:10 and 5
addition is : 15
subtraction is : 5
product is : 50
division is : 2

float result:
numbers are: 8.8 and 2.2
addition is : 11
subtraction is : 6.6
product is : 19.36
division is : 4
