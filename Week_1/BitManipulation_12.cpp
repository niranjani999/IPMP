#include<bits/stdc++.h>
using namespace std;
int swap(int n){
	int a = (n & 0x0F)<<4;
	int b = (n & 0xF0)>>4;
	return a|b;
}
int main(){
	int n;
	cin>>n;
	cout<<swap(n);
}
