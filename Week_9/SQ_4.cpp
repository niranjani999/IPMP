class Solution
{
    public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> v;
        deque<int> q(k);
        for(int i=0;i<k;i++){
            while((!q.empty()) && arr[i]>=arr[q.back()]) q.pop_back();
            q.push_back(i);
        }
        for(int i=0;i<n;++i){
            v.push_back(arr[q.front()]);
            while((!q.empty()) && q.front() <= i-k) q.pop_front();
            while((!q.empty()) && arr[i]>=arr[q.back()]) q.pop_back();
            q.push_back(i);
        }
        v.push_back(arr[q.front()]);
        return v;
    }
};
