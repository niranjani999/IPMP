class Solution{
public:
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        vector<vector<int>> dp(N, vector<int> (N,0));
        int i,j,k,l;
        for(int i = 2;i<N;i++){
            for(int j=1;j<=N-i;j++) {
                int k = j+i-1;
                dp[j][k] = INT_MAX;
                for(int l=j;l<k;l++) dp[j][k] = min(dp[j][k],dp[j][l]+dp[l+1][k] + arr[j-1]*arr[l]*arr[k]);
                
            }
        }
        return dp[1][N-1];
    }
};
