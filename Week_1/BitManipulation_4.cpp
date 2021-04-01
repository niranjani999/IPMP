class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        // Your logic here
        int ans = a^b;
        int count = 0;
        while(ans!=0){
            int i = ans & -ans;
            ans -= i;
            count++;
        }
        return count;
        
    }
};
