class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        int a = s.length();
        int b = p.length();
        if(a<b)return "";
        int ap[256] = {0};
        int aq[256] = {0};
        for(int i=0;i<b;i++) aq[p[i]]++;
        int start=0,minl=INT_MAX,index=-1,count=0;
        for(int j=0;j<a;j++){
            ap[s[j]]++;
            if(aq[s[j]]<=ap[s[j]]) count++;
            if(count==b){
                while(aq[s[start]] > ap[s[start]] || aq[s[start]]==0){
                    if(aq[s[start]] > ap[s[start]]) aq[s[start]]--;
                    start++;
                }
                int len = j-start+1;
                if(minl>len){
                    minl = len;
                    index = start;
                }
            }
        }
        if(index==-1)return "";
        return s.substr(index,minl);
    }
};
