class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int start = 0;
        vector<vector<int>> dp(n, vector<int> (n,0));
        int maxlen = 1;
        for(int i=0;i<n;i++) dp[i][i] = 1;
        for(int i=0;i<n-1;i++) {
            if(s[i] == s[i+1]) {
                dp[i][i+1] = 1;
                maxlen = 2;
                start = i;
            }
        }
        for(int j=3;j<=n;j++) {
            for(int i=0;i<n-j+1;i++) {
                int k = i+j-1;
                if(s[i]==s[k] && dp[i+1][k-1]==1) {
                    dp[i][j] = 1;
                    if(j > maxlen) {
                        maxlen = k;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start, maxlen);
    }
};
