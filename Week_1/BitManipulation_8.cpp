class Solution {
public:
    int getSum(int a, int b) {
        if(b==0) return a;
        int xorans = a^b;
        int carry = a&b;
        if(carry==0)
            return xorans;
        else return getSum(xorans,carry<<1);
    }
};
