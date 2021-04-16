class Solution{
public:	
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    int left = 0, right = n-1;
        while (left < right)
        {
            while (arr[left] % 2 == 0 && left < right) left++;
            while (arr[right] % 2 == 1 && left < right) right--;
            if (left < right)
            {
                swap(&arr[left], &arr[right]);
                left++;
                right--;
            }
        }
	}
}; 
