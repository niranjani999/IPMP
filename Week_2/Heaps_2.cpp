class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()<2) return {nums[0]};
        vector<int> res;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minheap;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(auto it : mp){
            minheap.push({it.second,it.first});
            if(minheap.size() >k) minheap.pop();
        }
        while(minheap.size()>0){
            res.push_back(minheap.top().second);
            minheap.pop();
        }
        return res;
    }
};
