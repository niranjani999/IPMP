#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>> n>> m;
	vector<pair<int,int>> adj(n+1);
	for(int i=0;i<m;i++){
		int u,v,z;
		cin>> u>> v>> z;
		adj[u].push_back({v,z});
		adj[v].push_back({u,z});
	}
	return 0;
}
