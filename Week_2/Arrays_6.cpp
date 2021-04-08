class Solution {
public:
    string nearestPalindromic(string n) {
        long len = n.length();
        string x = n;
        for(long i= len/2; i< len; i++) n[i] = n[len-i-1];
        if(n>x) return n;
        else{
            for(long i=(len-1)/2;i>=0;i--){
                if(x[i]!='9'){
                    x[i]++;
                    break;
                }
                else x[i] = '0';
            }
            for(long i=len/2;i<len;i++) x[i] = x[len-i-1];
            if(x[0] == '0'){
                x+='1';
                x[0] = '1';
            }
           return x; 
        }
    }
};
