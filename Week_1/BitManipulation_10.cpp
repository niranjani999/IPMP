#include<bits/stdc++.h>
using namespace std;
int swapElements(int n){
	int even = n & 0xAAAAAAAA;
	int odd = n & 0x55555555;
	even >>=1;
	odd <<=1;
	return odd|even;
}
int main(){
	int n;
	cin>>n;
	cout<<swapElements(n);
}
