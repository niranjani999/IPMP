class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxr = nums[0];
        int maxend = nums[0], minend = nums[0];
        for(int i=1;i<nums.size();++i){
            int temp = maxend;
            maxend = max({nums[i],nums[i]*maxend, nums[i]*minend});
            minend = min({nums[i],nums[i]*temp, nums[i]*minend});
            maxr = max(maxr,maxend);
        }
        return maxr;
    }
};
