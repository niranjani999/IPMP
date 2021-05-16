class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        unordered_map<int,int> m;
        int sum = 0;
        for(auto x : nums){
            sum += x;
            if(sum == k) count++;
            if(m.find(sum - k)!= m.end()) count += m[sum-k];
            if(m.find(sum) != m.end()) m[sum] ++;
            else m[sum] = 1;
        }
        return count;
    }
};
