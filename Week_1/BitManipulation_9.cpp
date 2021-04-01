class Solution{
    public:
    /*  function to find position of first set 
    bit in the given number
     * n: given input for which we want to get
          the position of first set bit
     */
    unsigned int getFirstSetBit(int n){
        // Your code here
        int count = 0,pos = 1;
        while(n){
            if(n&1)
              return pos;
            pos++;
            n=n>>1;
        }
        return 0;
    }
};
