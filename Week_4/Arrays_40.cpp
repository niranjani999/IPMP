class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
    }
public:
    void reverse(vector<int>& nums,int start,int end){
        while(start<end){
            int tp = nums[start];
            nums[start] = nums[end];
            nums[end] = tp;
            start++;
            end--;
        }
    }
};
