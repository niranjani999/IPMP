class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int lb = 0;
        int ub = n-1;
        
       while(lb<ub)
       {
           int mid = (lb + ub )/2;
           if(nums[mid] == nums[ub])
               ub--;
           else if(nums[mid] > nums[ub])
               lb = mid+1;
           else ub = mid;
         }
        return nums[ub];
    }
};
