class Solution{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	    // code here
	    int maxc = 0;
	    int ele = 0;
	    for(int i=0;i<n;i++){
	       int count = 1;
	       for(int j=i+1;j<n;j++){
	           if(arr[i]==arr[j]) count++;
	       }
	       if(maxc < count){
	           maxc = count;
	           ele = arr[i];
	       }
	    }
	    return ele;
	}

};
