#include<bits/stdc++.h>
using namespace std;
int left(int n, int i){
	return (n<<i)|(n>>(32 - i));
}
int right(int n, int i){
	return (n>>i)|(n<<(32 - i));
}
int main(){
	int n,i;
	cin>>n>>i;
	cout<<"Left Rotate : ";
	cout<<left(n,i);
	cout<<"\nRight Rotate : ";
	cout<<right(n,i);
}
