//structure into function

#include<conio.h>
#include<iostream>
using namespace std;

struct book{
	char name[100];
	int pages;
};

void display(struct book);
int main(){
	struct book b;
	cout<<"enter the book name and no of pages";
	cin>>b.name>>b.pages;
	display(b);
	return 0;
}

void display(struct book b){
	cout<<"details of book are under";
	cout<<"\n"<<b.name<<b.pages;
}
