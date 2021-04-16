#include<bits/stdc++.h>
using namespace std;
int main(){
	int count1=0,count2=0;
	string s,f;
	string p="";
	string q="";
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]>='a' && s[i]<='z'){
			p += s[i];
			count1++;
		}
		if(s[i]>='0' && s[i]<='9'){
			q+=s[i];
			count2++;
		}
	}
	f = p+q;
	cout<<f;
}
