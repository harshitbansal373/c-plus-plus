//median if sliding window

#include <bits/stdc++.h>
using namespace std;

int findmedian(vector<int> v,int n){
    vector<int> v2(v);
    sort(v2.begin(),v2.end());
	if(n%2!=0){
		cout<< v2[n/2]<<" ";
	}else{
	    float x=(float)(v2[n/2]+v2[n/2-1])/2;
		printf("%.1f ", x);
	}
}


void mediangroup(int *a,int n,int k){
    vector<int> v;
    for(int i=0;i<k;i++){
        v.push_back(a[i]);
    }
    findmedian(v,k);
    
    for(int i=k;i<n;i++){
        v.erase(v.begin());
        v.push_back(a[i]);
        findmedian(v,k);
    }
    
}

int main() {
	// your code goes here
	int a[]={-1, 5, 13, 8, 2, 3, 3, 1};
	int k = 3;
	int n=sizeof(a)/sizeof(a[0]);
	mediangroup(a,n,k);
	return 0;
}
