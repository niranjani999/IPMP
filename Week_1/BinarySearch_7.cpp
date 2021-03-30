class Solution {
public:
    int findPoint(vector<int>& nums) {
        int lb = 0;
        int n = nums.size();
        int ub = n-1;
        while(lb<=ub)
        {
        	int mid = (lb + ub )/2;
        	if(nums[mid] == mid)
        	   return mid;
        	else if(mid>nums[mid])
        	   return lb = mid+1;
        	else return ub = mid -1;
		}
		return -1;
    }
};
