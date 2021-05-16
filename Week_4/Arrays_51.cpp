class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int n = prices.size();
        int minCount = INT_MAX;
        for(int i=0;i<n;i++){
            minCount = min(minCount, prices[i]);
            maxPro = max(maxPro, prices[i]-minCount);
        }
        return maxPro;
    }
};
