#include<conio.h>
#include<iostream>
using namespace std;

template<class T>
T big(T a, T b)
{ if(a>b)
	return(a);
  else
  	return(b);
}

int main(){
	cout<<big(4,5);
	cout<<"\n"<<big(5.6,3.4);
	getch();
}

output
------
5
5.6
