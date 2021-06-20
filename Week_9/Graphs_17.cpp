class Solution {
public:
    int col[2001] = {0};
    unordered_map<int, vector<int>> mp;
    
    bool dfs(int x, int num) {
        if(col[x] != 0) return col[x] == num;
        else {
            col[x] = num;
            for(auto i : mp[x]) {
                if(dfs(i,-num) == false) return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        for(auto i : dislikes) {
            mp[i[0]].push_back(i[1]);
            mp[i[1]].push_back(i[0]);
        }
        for(int i=1;i<=n;i++) {
            if(col[i] == 0 && dfs(i,1)== false) return false;
        }
        return true;
    }
};
