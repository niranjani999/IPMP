class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(), sum = 0, left = 0;
        for(int x : nums) sum +=x;
        for(int i=0;i<n;i++){
            if(left == sum - left - nums[i]) return i;
            left += nums[i];
        }
        return -1;
    }
};
