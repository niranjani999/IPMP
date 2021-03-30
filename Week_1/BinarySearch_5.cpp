#include<bits/stdc++.h>
using namespace std;
void unsortedsize(int nums[],int n){
	int lb = 0;int ub = n-1;
	for(lb = 0;lb<n-1;lb++){
		if(nums[lb] > nums[lb+1])
		  break;
	}
	for(ub = n-1;ub>0;ub--){
		if(nums[ub] < nums[ub-1])
		   break;
	}
	int max = nums[lb];
	int min = nums[lb];
	for(int i = lb +1;i<=ub;i++){
		if(nums[i] > max)
		   max = nums[i];
		if(nums[i] < min)
		   min = nums[i];
	}
	for(int i=0;i<lb;i++){
		if(nums[i] > min){
			lb = i;
			break;
		}
	}
	for(int i=n-1;i>=ub+1;i--){
		if(nums[i] < max){
			ub = i;
			break;
		}
	}
	cout<<"Lies between : "<<lb<<" to "<<ub;
	cout<<"\nLength : "<<ub-lb;
}
int main()
{
	int nums[50],n;
	cin>>n;
	cout<<"nums : ";
	for(int i=0;i<n;i++)
	   cin>>nums[i];
	unsortedsize(nums,n);
}
