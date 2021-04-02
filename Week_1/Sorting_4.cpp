#include<bits/stdc++.h>
using namespace std;
void countSort(int nums[], int n) {
   int output[n+1];
   int maxn = nums[1];
   for(int i=1;i<=n;i++)
	  maxn = max(maxn,nums[i]);
   int count[maxn+1]; 

   for(int i = 0; i<=maxn; i++)
      count[i] = 0; 
   for(int i = 1; i <=n; i++)
      count[nums[i]]++; 
   for(int i = 1; i<=maxn; i++)
      count[i] += count[i-1]; 

   for(int i = n; i>=1; i--) {
      output[count[nums[i]]] = nums[i];
      count[nums[i]] -= 1; 
   }

   for(int i = 1; i<=n; i++) {
      nums[i] = output[i]; 
   }
   for(int i=1;i<=n;i++)
	   cout<<nums[i]<<"  ";
}

int main() {
   int n,nums[50];
   cin >> n;
   cout << "nums : ";
   for(int i = 1; i<=n; i++) 
      cin >> nums[i];
   countSort(nums, n);
}
