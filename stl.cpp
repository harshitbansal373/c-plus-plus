#include <iostream>
#include<sstream>
#include<vector>
#include<iterator>
using namespace std;
vector <int>parseInts(string str){
stringstream s(str);
int n;
  char t;
  vector<int>a;
  s>>n;
  a.push_back(n);
  while(s>>t){
  s>>n;
    a.push_back(n);
  }
  return a;
}
int main() {
	string str;
  cin>>str;
  vector<int>b=parseInts(str);
  for(auto x:b)
    cout<<x<<endl;
	return 0;
}
