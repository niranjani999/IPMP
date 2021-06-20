class Solution {
    vector<pair<int,int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        if(n==0)return 0;
        int m = grid[0].size();
        int ans =0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == '1') {
                    ans++;
                    queue<pair<int,int>> q;
                    grid[i][j] = 'v';
                    q.push({i,j});
                    while(!q.empty()) {
                        auto p = q.front();
                        q.pop();
                        for(auto x : dir) {
                            int a = p.first + x.first;
                            int b = p.second + x.second;
                            if(!(a<0 || a>=n || b<0 || b >=m ||grid[a][b] != '1')) {
                                grid[a][b] = 'v';
                                q.push({a,b});
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};

