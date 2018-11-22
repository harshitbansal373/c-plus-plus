//Using of scope resolution operator

#include<conio.h>
#include<iostream>
using namespace std;

int x=40;
void main(){
	int x;
	x=30;
	cout<<"Global Variable="<<::x;
	cout<<"Local Variable="<<::x;
	getch();
}

output
------
Global variable=40
Local variable=30
