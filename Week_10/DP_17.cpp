class Solution{
public:
    int palindromicPartition(string str)
    {
        // code here
        int n = str.length();
        bool dp[n][n];
        int a[n];
        for(int i=0;i<n;i++) dp[i][i] = true;
        for(int j=2;j<=n;j++) {
            for(int i=0;i<n-j+1;i++){
                int k = i+j-1;
                if(j==2)dp[i][k] = (str[i]==str[k]);
                else dp[i][k] = (str[i]==str[k]) && dp[i+1][k-1];
            }
        }
        for(int i=0;i<n;i++) {
            if(dp[0][i] == true) a[i] = 0;
            else {
                a[i] = INT_MAX;
                for(int j=0;j<i;j++) {
                    if(dp[j+1][i] == true && 1+a[j] <a[i]) a[i] = 1+a[j];
                }
            }
        }
        return a[n-1];
    }
};
