class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> v;
        sort(nums.begin(),nums.end());
        int sum;
        for(int i=0;i<n-3;++i){
            for(int j=i+1;j<n-2;++j){
                for(int k=j+1;k<n-1;++k){
                    for(int l=k+1;l<n;++l){
                        sum = nums[i]+nums[j]+nums[k]+nums[l];
                        if(sum>target) break;
                        else if(sum==target){
                            vector<int> t;
                            t.push_back(nums[i]);
                            t.push_back(nums[j]);
                            t.push_back(nums[k]);
                            t.push_back(nums[l]);
                            v.insert(t);
                        }
                    }
                }
            }
        }
        vector<vector<int>> res;
        for(auto it : v)
            res.push_back(it);
        return res;
            
    }
};
