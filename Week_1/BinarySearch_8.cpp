#include<bits/stdc++.h>
using namespace std;
int maximum(int nums[],int lb,int ub){
	while(lb<=ub)
	{
		int mid = (lb+ub)/2;
	    if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]) 
	       return mid;
	    if(nums[mid] > nums[mid+1] && nums[mid] < nums[mid-1])
	        return maximum(nums,lb,mid-1);
	    else if(nums[mid] < nums[mid+1] && nums[mid] > nums[mid-1])
	        return maximum(nums,mid+1,ub);
	}
	return -1;
}
int main()
{
	int nums[50],n;
	cin>>n;
	for(int i=0;i<n;i++)
	   cin>>nums[i];
	int val = maximum(nums,0,n-1);
	cout<<"Max : "<<nums[val];
}
