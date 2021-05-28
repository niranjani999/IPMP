class Solution {
public:
    void rpermutate(int id, vector<int> &nums, vector<vector<int>> &ans) {
        if(id == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=id;i<nums.size();i++){
            swap(nums[id],nums[i]);
            rpermutate(id+1, nums, ans);
            swap(nums[id] , nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        rpermutate(0,nums,ans);
        return ans;
    }
};
