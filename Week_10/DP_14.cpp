class Solution{
    public:
    int countMin(string str){
        //complete the function here
        int n = str.length();
        int j,k;
        vector<vector<int>> dp(n, vector<int> (n,0));
        for(int i=1;i<n;i++) {
            for(j=0, k=i;k<n;k++,j++) {
                if(str[j] == str[k]) dp[j][k] = dp[j+1][k-1];
                else dp[j][k] = min(dp[j][k-1], dp[j+1][k]) + 1;
            }
        }
        return dp[0][n-1];
    }
};
