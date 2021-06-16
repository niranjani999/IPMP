class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<pair<int,int>> s;
        vector<int> l(n,-1);
        vector<int> r(n,n);
        s.push({heights[0],0});
        for(int i=1;i<n;i++){
            while(!s.empty() && s.top().first >= heights[i]) s.pop();
            if(!s.empty()) l[i] = s.top().second;
            s.push({heights[i],i});
        }
        while(!s.empty()) s.pop();
        s.push({heights[n-1],n-1});
        for(int i=n-2;i>=0;i--){
            if(!s.empty()){
                while(!s.empty() && s.top().first >= heights[i]) s.pop();
                if(!s.empty()) r[i] = s.top().second;
            }
            s.push({heights[i],i});
        }
        int maxi = 0;
        for(int i=0;i<n;i++)maxi =max(maxi, (r[i]-l[i]-1)*heights[i]);
        return maxi;
    }
};
