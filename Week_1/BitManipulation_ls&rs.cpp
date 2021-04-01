#include<bits/stdc++.h>
using namespace std;
int leftShift(int n, int i){
	return (n<<i);
}
int rightShift(int n, int i){
	return (n>>i);
}
int main(){
	int n,i;
	cin>>n>>i;
	cout<<"Left Shift : ";
	cout<<leftShift(n,i);
	cout<<"\nRight Shift : ";
	cout<<rightShift(n,i);
}
