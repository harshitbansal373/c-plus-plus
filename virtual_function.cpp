/* Virtual function*/

#include<iostream>
using namespace std;

class base{
  public:
    void display(){cout<<"\n display base";}
    virtual void show(){cout<<"\n show base";}
};

class derived : public base{
  public:
    void display(){cout<<"\n display derived";}
    virtual void show(){cout<<"\n show derived";}
};

int main(){
base b;
derived d;
base *p;

cout<<"\n p points to base\n";
p=&b;
p->display();			//calls base version
p->show();			//calls base version

cout<<"\n p points to derived\n";
p=&d;
p->display();			//calls base version
p->show();			//calls derived version

return 0;
}


output
------

p points to base
display base
show base

p points to derived
display base
show derived









