//gfg
#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n,k;cin>>n>>k;
	    int arr[k];
	    for(int i=0;i<k;i++){
	        cin>>arr[i];
	        arr[i]-=1;
	    }
	        
	    int a[n]={0};
        
        for(int i=0;i<k;i++){
            
            for(int j=arr[i];j<n;j++){
                a[j]++;
            }
        }
    
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
	    cout<<endl;
	}
	return 0;
}
