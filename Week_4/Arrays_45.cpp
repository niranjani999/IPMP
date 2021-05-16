class Solution{
  public:
    int maxLen(int arr[], int n)
    {
        // Your code here
        unordered_map<int,int> m;
        int sum =0,len = 0,end = -1;
        for(int i=0;i<n;i++){
            if(arr[i]==0) arr[i] = -1;
            else arr[i] = 1;
        }
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum==0){
                len = i+1;
                end = i;
            }
            if(m.find(sum) !=m.end()){
                if(len < i-m[sum]){
                    len = i-m[sum];
                    end = i;
                }
            }
            else m[sum] = i;
        }
        for(int i=0;i<n;i++){
            if(arr[i]==-1) arr[i] = 0;
            else arr[i] = 1;
        }
        return len;
    }
};
