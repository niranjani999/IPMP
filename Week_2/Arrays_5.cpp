class Solution{
    public:
    vector<int> twoOddNum(int Arr[], int N)  
    {
        // code here
        int xor2 = Arr[0]; 
        int set_bit_no; 
        int i; 
        int n = N - 2; 
        int x = 0, y = 0;
        vector<int> ans;
        for(i = 1; i < N; i++) 
          xor2 = xor2 ^ Arr[i];
        set_bit_no = xor2 & ~(xor2-1);
        for(i = 0; i < N; i++) 
        { 
           if(Arr[i] & set_bit_no) {
               x = x ^ Arr[i];
           }
           else {
               y = y ^ Arr[i];
           }
         }
        if(x<y){
            ans.push_back(y);
            ans.push_back(x);
        }
        else{
            ans.push_back(x);
            ans.push_back(y);
        }
        return ans;
    }
};
