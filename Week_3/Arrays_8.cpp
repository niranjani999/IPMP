class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> s;
        vector<int> v;
        for(int i=0;i<n;i++){
            int temp = target - nums[i];
            if(s.find(temp)!=s.end()){
                v.push_back(s[temp]);
                v.push_back(i);
            }
            else{
                s[nums[i]]=i;
            }
        }
        return v;
    }
};
