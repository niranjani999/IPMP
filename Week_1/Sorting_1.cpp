#include<bits/stdc++.h>
using namespace std;
void merge(int nums[],int lb,int mid,int ub)
{
	int temp[50];	
	int i = lb,j,k=0;j=mid+1;
	while(i<=mid && j<=ub)	
	{  if(nums[i]<nums[j])
		  temp[k++]=nums[i++];
	   else
		  temp[k++]=nums[j++];
	}
	while(i<=mid)	
		temp[k++]=nums[i++];	
	while(j<=ub)	
		temp[k++]=nums[j++];	
	for(i=lb,j=0;i<=ub;i++,j++)
		nums[i]=temp[j];
}
void mergesort(int nums[],int lb,int ub)
{
	if(lb<ub)
	{
		int mid=(lb+ub)/2;
		mergesort(nums,lb,mid);		
		mergesort(nums,mid+1,ub);	
		merge(nums,lb,mid,ub);	
	}
}
int main(){
	int nums[100],n;
	cin>>n;
	cout<<"nums : ";
	for(int i=0;i<n;i++)
	   cin>>nums[i];
	mergesort(nums,0,n-1);
	cout<<"\n";
	for(int i=0;i<n;i++)
	  cout<<nums[i]<<"  ";
}
