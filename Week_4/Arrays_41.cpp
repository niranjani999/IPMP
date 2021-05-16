class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int maxSum = INT_MIN, maxEnd = 0;
        for(int i=0;i<n;i++){
            maxEnd += arr[i];
            if(maxSum < maxEnd) maxSum = maxEnd;
            if(maxEnd < 0) maxEnd = 0;
        }
        return maxSum;
    }
};
