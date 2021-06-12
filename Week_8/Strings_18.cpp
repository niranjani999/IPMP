class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        int n = words.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(words[i] != words[j] && words[j].find(words[i]) != -1){
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};

//String matching in an array
