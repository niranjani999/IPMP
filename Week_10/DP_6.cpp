class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        if(n == 0) return 0;
        int ans = 0;
        vector<vector<int>> dp(n+1, vector<int> (m+1,0));
        for(int i = 1;i <= n; i++){
            for(int j = 1;j <= m; j++) {
                if(matrix[i-1][j-1] == '1') {
                    dp[i][j] = 1 + min({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]});
                    if(ans < dp[i][j]) ans = dp[i][j];
                }
            }
        }
        return ans*ans;
    }
};
