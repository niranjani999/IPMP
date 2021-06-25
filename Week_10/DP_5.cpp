class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        vector<int> dp(n,INT_MAX);
        dp[0] = 0;
        for(int i=1;i<n;i++) {
            for(int j=0;j<i;j++) {
                if(dp[j] != INT_MAX && i <= j+nums[j]) {
                    dp[i] = min(1+dp[j], dp[i]);
                }
            }
        }
        return dp[n-1];
    }
};
