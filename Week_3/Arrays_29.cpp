void binSort(int A[], int N)
{
   //Your code here
   int left=0,right=N-1;
   while(left<right){
       while (A[left] == 0 && left < right) left++;
       while (A[right] == 1 && left < right) right--;
       if (left < right)
        {
            A[left] = 0;
            A[right] = 1;
            left++;
            right--;
        }
   }
}
