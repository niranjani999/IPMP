class Solution {
public:
    void dfs(vector<vector<int>>& graph,vector<vector<int>>& res,vector<int> path,int x){
        path.push_back(x);
        if(x == graph.size()-1) res.push_back(path);
        else 
            for(int v: graph[x]) dfs(graph,res,path,v);
        path.pop_back();
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> path;
        dfs(graph,res,path,0);
        return res;
    }
};
