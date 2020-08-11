#include <iostream>
using namespace std;

void findgcd(int a, int b){
	int res=1;
	int n=min(a,b)/2;
	for(int i=2;i<=n;i++){
		if(a%i==0 && b%i==0){
			a=a/i;
			b=b/i;
			res=res*i;
		}
	}
	cout<<res;
}

int main() {
	// your code goes here
	findgcd(98,56);
	return 0;
}
