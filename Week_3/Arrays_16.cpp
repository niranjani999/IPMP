class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int A[], int n)
    {
      //Your code here
      int maxd = A[1] - A[0];
      for(int i = 0; i < n; i++){
          for(int j=i+1;j<n;j++){
              if(A[j]-A[i]>maxd)
                 maxd = A[j]=A[i];
          }
        }
      return maxd;
      }
};
