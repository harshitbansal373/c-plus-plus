#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define mod 1000000007

int main()
{
//std::ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif*/
ll t=1,n,i,j,k,m,x,y;
cin>>t;    
while(t--)
{
cin>>n;
ll a[n];
ll b[n];
ll c[n];

for(i=0;i<n;i++)
 cin>>a[i];

ll mx=a[0]; 
for(i=0;i<n;i++)
{
 b[i]=max(a[i],mx);   
}
mx=a[n-1];
for(i=n-1;i>=0;i--)
{
 c[i]=max(a[i],mx);   
}

ll sum=0;
for(i=0;i<n;i++)
{
    sum=sum+max((ll)0,(min(b[i],c[i])-a[i]));
}
cout<<sum<<endl;

}

return 0;
}
