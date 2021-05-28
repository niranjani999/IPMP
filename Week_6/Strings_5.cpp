class Solution {
public:
    string removeDuplicateLetters(string s) {
        if(s.length() == 0) return s;
        vector<int> f(26, 0);
        vector<bool> v(26, false);
        vector<char> st;
        for(auto c : s) f[c - 'a']++;
        for(int i=0;i<s.length();i++){
            f[s[i] - 'a']--;
            if(v[s[i] - 'a']) continue;
            while(!st.empty() && (s[i] < st[st.size() - 1]) && f[st[st.size() - 1] - 'a'] > 0){
                v[st[st.size() - 1] - 'a'] = false;
                st.pop_back();
            }
            st.push_back(s[i]);
            v[s[i] - 'a'] = true; 
        }
        string res;
        for(int i=0;i<st.size();i++){
            res += st[i];
            
        }
        return res;
        
    }
};
