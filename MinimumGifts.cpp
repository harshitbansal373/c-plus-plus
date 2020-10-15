

/*
Given people with ranks in a row
higher rank gets more chocolates than the neighbours
*/
#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t;
    cin>>t;
  	for(int i=0;i<t;i++) {
      	int n;cin>>n;
      	int arr[n];
      	for(int j=0;j<n;j++)
          	cin>>arr[j];
      	vector<int> res(n,1);
      	int sum=0;
      	for(int j=1;j<n;j++) {
        	if(arr[j]>arr[j-1]) {
            	res[j]=res[j-1]+1;
            }
        }
      	for(int j=n-1;j>0;j--) {
        	if(arr[j]<arr[j-1] && res[j]>=res[j-1]) {
            	res[j-1]=res[j]+1;
            }
        }
      	for(int j=0;j<n;j++)
          	sum+=res[j];
      	cout<<sum<<'\n';
    }
}
