class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int count[256] = { 0 };
        int i;
        for (i = 0; a[i] && b[i]; i++) {
            count[a[i]]++;
            count[b[i]]--;
        }
        if (a[i] || b[i])
            return false;
        for (i = 0; i < 256; i++)
            if (count[i])
                return false;
        return true;    
    }
};
