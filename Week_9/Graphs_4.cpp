class Solution {
public:
    bool dfs(int u, vector<vector<int>>& adj,vector<int>& ans, vector<int>& visited) {
        visited[u] = 1;
        for(int v: adj[u]) {
            if(visited[v] == 1) return true;
            if(visited[v] == 0 && dfs(v,adj,ans,visited)) return true; 
        }
        visited[u] = 2;
        ans.push_back(u);
        return false;
    }
    
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ans;
        vector<int> visited(numCourses,0);
        vector<vector<int>> adj(numCourses);
        for(vector<int>& courses : prerequisites) 
            adj[courses[1]].push_back(courses[0]);
        for(int i=0;i<numCourses;i++){
            if(visited[i] == 0 && dfs(i,adj,ans,visited)) return {};
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
