#include <iostream>
using namespace std;
int main() {
int n;
  cin>>n;
  while(n--)
  {
    int y,m,d,e=0,leap=0;
    char a;
  cin>>y>>a>>m>>a>>d;
    if(y%4==0){
    if(y%400==0)
      leap=1;
    else if(y%100==0)
      leap=0;
    else
      leap=1;
    }
    else
      leap=0;
    
    
    if(m==1 || (m==2 && leap==1) || m==3 || m==5 ||m==7 || m==8 || m==10 || m==12){
    if(m==2)
      e=29-d;
    else
      e=31-d;
    }
  else{
  if(m==2 && leap==0)
    e=59-d;
   else
     e=61-d;
  }
  cout<<e/2+1<<endl;
  
  
  }
  return 0;
}
