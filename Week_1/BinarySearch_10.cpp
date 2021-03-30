class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int lb = 0; int ub = n1;
        while(lb<=ub)
        {
            int mid = (lb+ub)/2;
            int i = (n1+n2+1)/2 - mid;
            int min1 = (mid==n1)? INT_MAX : nums1[mid];
            int max1 = (mid==0) ? INT_MIN : nums1[mid-1];
            int min2 = (i==n2)? INT_MAX : nums2[i];
            int max2 = (i==0) ? INT_MIN : nums2[i-1];
            if(max1<=min2 && max2<=min1){
                if((n1+n2)%2==0)
                    return ((double) (max(max1,max2) + min(min1,min2))/2);
                else
                    return ((double) max(max1,max2));
            }
            else if(max1>max2){
                ub = mid-1;
            }
            else lb = mid+1;
        }
        return 0.0;
    }
};
