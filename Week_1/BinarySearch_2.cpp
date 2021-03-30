class Solution {
    public :
        int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = 0;
        int ub = n-1;
        
       while(lb<=ub)
       {
           int mid = (lb + ub )/2;
           if(nums[mid] == target)
               return mid;
           else if(nums[lb]<=nums[mid])
           {
               if(target>=nums[lb] && target<=nums[mid])  
                   ub = mid - 1;
               else
                   lb = mid+1;
           }
           else
              {
                if(target>nums[mid] && target<=nums[ub])
                    lb = mid+1;
                 else
                    ub = mid-1;
               }
         }
        return -1;
    }
};
