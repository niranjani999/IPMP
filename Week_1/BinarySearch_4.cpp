#include<bits/stdc++.h>
using namespace std;
int ceil(int nums[],int lb,int ub,int target){
	if(target <= nums[lb])
	   return lb;
	else if(target > nums[ub])
	   return -1;
	while(lb<=ub){
		int mid = (lb+ub)/2;
		if(nums[mid] == target)
		   return mid;
		else if(nums[mid] > target){
			ub = mid -1;
		}
		else if(nums[mid] < target)
		   lb = mid+1;
	}
}
int floor(int nums[],int lb,int ub,int target){
	int res;
	if(target <= nums[lb])
	   return -1;
	else if(target > nums[ub])
	   return ub;
	while(lb<=ub){
		int mid = (lb+ub)/2;
		if(nums[mid] == target)
		   return mid;
		else if(nums[mid] > target){
			ub = mid -1;
		}
		else if(nums[mid] < target){
			res = mid;
			lb = mid+1;
		}
		   
	}
	return res;
}
int main()
{
	int nums[50],n,target;
	cin>>n;
	cout<<"nums : ";
	for(int i=0;i<n;i++)
	   cin>>nums[i];
	cout<<"target : ";
	cin>>target;
	int val1 = ceil(nums,0,n-1,target);
	int val2 = floor(nums,0,n-1,target);
	if(val1 == -1)
	   cout<<"Doesn't exist";
	else  cout<<"Ceil  : "<<nums[val1];
	if(val2 == -1)
	   cout<<"Doesn't exist";
	else  cout<<"\nFloor : "<<nums[val2];
}
