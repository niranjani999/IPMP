class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> res;
        int max_r= a[n-1];
        res.push_back(max_r);
        for(int i=n-2;i>=0;i--){
            if (max_r <= a[i]){          
               max_r = a[i];
               res.push_back(max_r);
            }
        }
        return res;
    }
};
