class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long> s;
        vector<long long> v;
        s.push(arr[0]);
        for(int i=1;i<n;i++){
            if(s.empty()){
                s.push(arr[i]);
                continue;
            }
            while(!s.empty() && s.top() < arr[i]){
                v.push_back(arr[i]);
                s.pop();
            }
            s.push(arr[i]);
        }
        while(!s.empty()){
            v.push_back(-1);
            s.pop();
        }
        return v;
    }
};
