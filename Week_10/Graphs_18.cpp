class Solution {
	public :
		bool bfs(int src, vector<int> adj[], int col[]) {
			queue<int> q;
			q.push(src);
			col[src] = 1;
			while(!q.empty()){
				int node = q.front();
				q.pop();
				for(auto it : adj[node]){
					if(col[it] == -1){
						col[it] = 1-col[node];
						q.push(it);
					}
					else if(col[it]==col[node]) return false;
				}
			}
			return true;
		}
		bool checkBipartite(vector<int> adj[], int n) {
			int col[n];
			memset(col,-1,sizeof col);
			for(int i=0;i<n;i++) {
				if(col[i] == -1) {
					if(!bfs(i,adj,col)) return false;
				}
			}
			return true;
		}
};
