#include <iostream>
using namespace std;
class partner{
public:
void findpartner();
};
void partner::findpartner(){
int t;
  cin>>t;
  while(t--){
  int n;
    cin>>n;
    int b;
    b=n/8;
    if(n%8==1 || n%8==4){
      if(n%8==1){
      cout<<(b+1)*8-4<<"LB"<<endl;
      }
      else{
      cout<<(b+1)*8-7<<"LB"<<endl;
      }
      }
    else if(n%8==2 || n%8==5){
    if(n%8==2){
    cout<<(b+1)*8-3<<"MB"<<endl;
    }
    else{cout<<(b+1)*8-6<<"MB"<<endl;}
    }
  
  else if(n%8==3 || n%8==6){
  if(n%8==3){cout<<(b+1)*8-2<<"UB"<<endl;}
  else{cout<<(b+1)*8-5<<"UB"<<endl;}  
  }
  else{if(n%8==7){cout<<(b+1)*8<<"SU"<<endl;}
      else{cout<<(b+1)*8-1<<"SL"<<endl;}}
    n=0;b=0;
}
}
int main() {
partner obj;
  obj.findpartner();
	return 0;
}
