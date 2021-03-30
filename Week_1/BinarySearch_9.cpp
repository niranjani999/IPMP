class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x1 = m-1; 
        int x2 = n-1;
        int i = m+n-1;
        while(x2>=0){
            if(x1>=0 && nums1[x1]>nums2[x2])
            {
                nums1[i--] = nums1[x1--];
            }
            else
            {
                nums1[i--] = nums2[x2--];
            }
        }
    }
};
