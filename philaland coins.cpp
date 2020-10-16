#include <bits/stdc++.h> 
using namespace std; 

int getMin(int n) 
{
    float a = log(n);
    float b = log(2);
    return a/b+1; 
} 
 
int main()  
{
	int T,N;
    cin>>T;
    while(T--)
	{
		cin>>N;
	    cout << getMin(N) << endl; 
	}
	return 0; 
} 
