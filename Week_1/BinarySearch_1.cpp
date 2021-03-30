class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = 0;
        int ub = n-1;
        while(lb<=ub){
        	int mid = (lb+ub)/2;
        	if(target == nums[mid])
        	   return mid;
        	else if(target > nums[mid])
        	   lb = mid+1;
        	else if(target < nums[mid])
        	   ub = mid-1;
		}
		return -1;
    }
};
