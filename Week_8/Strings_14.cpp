class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        int len = S.size();
        int ans = 0,i=0;
        vector<int> v(256,-1);
        for(int j=0;j<len;j++){
            i = max(i,v[S[j]]+1);
            ans = max(ans,j-i+1);
            v[S[j]] = j;
        }
        return ans;
    }
};
