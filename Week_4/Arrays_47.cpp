class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        unordered_map<int,int> mp;
        int ans;
        for(int i = 0; i < size; i++) mp[a[i]]++;
        int count = 0;
        for(auto i : mp) {
        if(i.second > size / 2) {
            count =1;
            ans = i.first;
            break;
          }
         else if(count==0) ans = -1;
        }
        return ans;
    }
};
