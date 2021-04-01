#include <iostream>
using namespace std;
int turnOff(int n){
    return n &(n-1);
}
int main() {
	int n;
	cin>>n;
	cout<<turnOff(n);
	return 0;
}
