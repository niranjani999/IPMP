#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	cout<<"Permutations : \n";
	do{
		cout<<s<<endl;
	}while(next_permutation(s.begin(),s.end()));
	return -1;
}
