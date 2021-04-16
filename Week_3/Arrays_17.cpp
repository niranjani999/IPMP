class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int res = arr[1]-arr[0];
        for(int i=2;i<arr.size();i++){
            if(arr[i]-arr[i-1] < res) res = arr[i]-arr[i-1];
        }
        vector<vector<int>> ans;
        vector<int> temp(2);
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1] == res){
                temp[1]=arr[i];
                temp[0]=arr[i-1];
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
