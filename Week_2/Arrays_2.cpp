class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        unordered_map<int,int> l;
        for(int i=0;i<n;i++){
            l[arr[i]]++;
        }
        for(auto j : l){
            if(j.second %2 != 0)return j.first;
        }
        return -1;
    }
};
