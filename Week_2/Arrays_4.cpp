class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int> ans;
        int xorans = 0;
        for(int i : nums)
           xorans ^= i;
        int answer = xorans & ~(xorans-1);
        int x=0,y=0;
        for(int i : nums){
            if(i & answer){
                x = x^ i;
            }
            else{
                y =y ^ i;
            }
        }
        if(x<y){
            ans.push_back(x);
            ans.push_back(y);
        }
        else{
            ans.push_back(y);
            ans.push_back(x);
        }
        
        return ans;
    }
};
