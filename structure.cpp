//structure program

#include<conio.h>
#include<iostream>
using namespace std;

struct book{
	char name[100];
	int price;
	int pages;
};

int main(){
	struct book b;
	cout<<"enter the book name, price and no of pages";
	cin>>b.name>>b.price>>b.pages;
	cout<<"details of book are under";
	cout<<"\n"<<b.name<<b.price<<b.pages;
	return 0;
}
