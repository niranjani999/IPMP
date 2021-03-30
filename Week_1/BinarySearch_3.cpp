#include<bits/stdc++.h>
using namespace std;
int bsearch(int nums[],int lb,int ub, int target);
bool isMajority(int nums[],int n,int target){
	int x1 = bsearch(nums,0,n-1,target);
	int x2 = x1 + n/2;
	return x2 < n && nums[x2] == target;
	
}
int bsearch(int nums[],int lb,int ub, int target){
	while(lb<=ub){
		int mid = (lb + ub)/2;
		if(nums[mid] < target)
		   lb = mid+1;
		else if(nums[mid-1] < target && nums[mid] == target )
		   return mid;
		else ub = mid-1;
	}
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
	int val = isMajority(nums,n,target);
	if(val == 1)
	   cout<<"\nTrue"<<endl;
	else cout<<"\nFalse"<<endl;
}
