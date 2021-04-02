#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
    if(n<=0) return false;
    if((n & (n-1)) == 0)
        return true;
    else return false;
    }
int position(int n){
	if(!isPowerOfTwo(n))
	   return -1;
	unsigned i=1,pos=1;
	while(!(i&n)){
		i<<=1;
		++pos;
	}
	return pos;
}
int main(){
	int n;
	cin>>n;
	int pos = position(n);
	cout<<"Position : ";
	if(pos==-1) cout<<"Invalid";
	else cout<<pos;
}
