//Using of inline function

#include<conio.h>
#include<iostream>
using namespace std;

inline void fun();
int main(){
	cout<<"you are in main";
	fun();
	return 0;
}

void fun(){
	cout<<"you are in fun";
}
