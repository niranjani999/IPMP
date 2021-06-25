class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);
        int maxlen = 0;
        dp[0] = 1;
        for(int i=0;i<n;i++) {
            int curr = 0;
            for(int j=0;j<n;j++) {
                if(nums[i] > nums[j])
                    if(curr < dp[j]) curr = dp[j];
            }
            dp[i] = curr +1;
            maxlen = max(maxlen, dp[i]);
        }
        return maxlen;
    }
};
