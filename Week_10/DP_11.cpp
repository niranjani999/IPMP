class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = scores.size();
        vector<int> dp(n,-1e9);
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++) v.push_back({ages[i], scores[i]});
        sort(v.begin(), v.end());
        dp[0] = v[0].second;
        for(int i=1;i<n;i++) {
            dp[i] = v[i].second;
            for(int j=0;j<i;j++) 
                if(v[j].second <= v[i].second) dp[i] = max(dp[i],dp[j]+v[i].second);
        }
        int maxlen = -1;
        for(int i=0;i<n;i++) maxlen = max(maxlen, dp[i]);
        return maxlen;
    }
};
