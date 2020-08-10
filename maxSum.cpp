/*without window sliding technique

Given an array of integers of size ‘n’.
Our aim is to calculate the maximum sum of ‘k’ 
consecutive elements in the array.

Input  : arr[] = {100, 200, 300, 400}
         k = 2
Output : 700

Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}
         k = 4 
Output : 39
We get maximum sum by adding subarray {4, 2, 10, 23}
of size 4.

Input  : arr[] = {2, 3}
         k = 3
Output : Invalid
There is no subarray of size 3 as size of whole
array is 2.
*/

#include <bits/stdc++.h>
using namespace std;

int maxsum(int *a,int n,int k){
	int max_sum=INT_MIN;
	
	for(int i=0;i<=n-k;i++){
		int current_sum=0;
		for(int j=i;j<i+k;j++){
			current_sum=current_sum+a[j];
		}
		max_sum=max(current_sum,max_sum);
	}
	
	return max_sum;
}

int main() {
	// your code goes here
	int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}; 
    int k = 4; 
    int n = sizeof(arr) / sizeof(arr[0]); 
	cout<<maxsum(arr,n,k);
	return 0;
}
