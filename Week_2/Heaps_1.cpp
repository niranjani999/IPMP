#include <iostream>
#include<vector>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
int ksort(int *arr,int n, int k){
    priority_queue<int, vector<int>, greater<int> > pq(arr, arr + k + 1);
    int index = 0;
    for (int i = k + 1; i < n; i++) {
        arr[index++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
 
    while (pq.empty()==false) {
        arr[index++] = pq.top();
        pq.pop();
    }
}

int main() {
	int t,n,k;
	vector<int> v;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    ksort(arr,n,k);
	    for(int i=0;i<n;i++)
	      cout<<arr[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
