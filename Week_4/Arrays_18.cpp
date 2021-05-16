class Solution
{
    public:
        bool compare(int x, int y) {
            return abs(x) < abs(y);
        }
        int closestToZero(int arr[], int n)
        {
            // your code here
            sort(arr,arr+n);
            //for(int i=0;i<n;i++)cout<<arr[i]<<"  ";
            int min = INT_MAX,x,y;
            for(int i=1;i<n;i++){
                if(abs(arr[i-1]+ arr[i])<= min){
                    min = abs(arr[i-1]+arr[i]);
                    x = i-1;
                    y=i;
                }
            }
            return min;
        }
};
