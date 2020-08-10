#include<bits/stdc++.h>
using namespace std;

int findsum(int *a,int n){
    int sum=0;
    unordered_set<int> sumset;
    
    for(int i=0;i<n;i++){
        sum+=a[i];
        
        if(sum==0||sumset.find(sum)!=sumset.end()){
            return 1;
        }
        sumset.insert(sum);
    }
    return 0;
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(findsum(a,n)){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
        cout<<endl;
    }
    return 0;
}
