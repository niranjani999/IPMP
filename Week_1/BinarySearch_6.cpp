#include<bits/stdc++.h>
using namespace std;
int firstPosition(int nums[],int target,int n)
{
	int fpos = -1;
	int lb = 0;
	int ub = n-1;
	while(lb<=ub){
		int mid = (lb+ub)/2;
		if(nums[mid]>=target){
			fpos = mid;
			ub = mid-1;
		}
		else lb = mid+1;
	}
	return fpos;
}
int main()
{
	int nums[50],n,target;
	cin>>n;
	cout<< "nums : ";
	for(int i=0;i<n;i++)
	   cin>>nums[i];
	cout<<"target : ";
	cin>>target;
	int first = firstPosition(nums,target,n);
	int last = firstPosition(nums,target+1,n);
	if(first <= last)
	   cout<<"Occurrences : "<<last-first<<endl;
	else cout<<"Not found"<<endl;
}
