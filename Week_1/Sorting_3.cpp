class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int nums[], int l, int u)
    {
        int loc;
	    if(l<u)
	    {
		   loc=partition(nums,l,u);
		   quickSort(nums,l,loc-1);
		   quickSort(nums,loc+1,u);
    	}
    }
    
    public:
    int partition (int nums[], int l, int u)
    {
       int p,s,e,temp;
	   p=nums[l];
	   s=l;
	   e=u;
	   while(s<e)
	   {
		  while(nums[s] <= p)
		    s++;
		  while(nums[e] > p)
	    	 e--;
		  if(s<e)
		   {
			  swap(nums[s],nums[e]);
		   }
	    }
    	nums[l]=nums[e];
    	nums[e]=p;
	    return e;
      }
};
