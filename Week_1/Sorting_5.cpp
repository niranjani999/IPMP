#include<bits/stdc++.h>
using namespace std;
int main(){
	int nums[50],n,flag;
	cin>>n;
	cout<<"nums : ";
	for(int i=0;i<n;i++)
	   cin>>nums[i];
	for(int i=1;i<n;i++)
	{
		int key = nums[i];
		int j=i-1;
		for(j=i-1;j>=0;j--)
		{  if(nums[j]>key){
			 nums[j+1] = nums[j];
			 flag=1;	
			}
	       else break;
		}
		if(flag)
		nums[j+1]=key;
	}
	cout<<"\n";
	for(int i=0;i<n;i++)
	  cout<<nums[i]<<"  ";
}
